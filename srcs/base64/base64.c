/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base64.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 05:31:56 by bnoufel           #+#    #+#             */
/*   Updated: 2021/04/20 05:32:02 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base64.h"
#include "ft_ssl_des.h"

static void		bufferization(t_ssl_des *des, char *base64, size_t n)
{
	char		buff[4097];
	size_t		i;
	size_t		j;

	buff[0] = '\0';
	i = 0;
	j = 0;
	while (j < n)
	{
		ft_strncatindex(buff, &i, base64 + j, des->break_hash);
		ft_charcatindex(buff, &i, '\n');
		j += des->break_hash;
		if (i + des->break_hash > 4096)
		{
			ft_dprintf(des->output_file_fd, "%s", buff);
			buff[0] = '\0';
			i = 0;
		}
	}
	buff[i] = '\0';
	ft_dprintf(des->output_file_fd, "%s\n", buff);
}

void			print_base64(t_ssl_des *des, char *base64)
{
	size_t		n;

	if (!base64)
		return ;
	n = ft_strlen(base64);
	if (des->args & FLAG_DES_d)
		ft_dprintf(des->output_file_fd, "%s\n", base64);
	else if (des->break_hash > 0)
		bufferization(des, base64, n);
	else
		ft_dprintf(des->output_file_fd, "%s\n", base64);
	ft_strdel(&base64);
}

int				get_str_fd(int fd, char **line, size_t *size)
{
	char		buff[4096];
	ssize_t		n;

	if (!(*line = ft_memalloc(1)))
		return (0);
	*size = 0;
	while ((n = read(fd, &buff, 4096)) > 0)
	{
		if (!(*line = ft_memjoinfreefirst(*line, *size, buff, n)))
			return (0);
		*size += n;
	}
	if (n == -1)
	{
		ft_strdel(&(*line));
		return (0);
	}
	if (!(*line = ft_memjoinfreefirst(*line, *size, buff, n)))
		return (0);
	*size += n;
	return (1);
}

static char		*base64_for_flag_a(char *msg, size_t size, char *hex)
{
	char		*ret;
	char		*savemsg;

	if (!(savemsg = ft_strdup(msg)))
		return (NULL);
	if (!(ret = base64_decode(msg, hex)))
	{
		ret = (base64_encode(savemsg, size, hex));
		ft_strdel(&savemsg);
		return (ret);
	}
	ft_strdel(&savemsg);
	return (ret);
}

char			*base64(t_ssl_des *des, char *hex)
{
	char		*msg;
	size_t		size;
	char		*ret;

	set_fds(des);
	if (!get_str_fd(des->input_file_fd, &msg, &size))
		return (NULL);
	if (des->args & FLAG_DES_a)
	{
		ret = base64_for_flag_a(msg, size, hex);
		ft_strdel(&msg);
		return (ret);
	}
	if (des->args & FLAG_DES_d)
	{
		ret = (base64_decode(msg, hex));
		ft_strdel(&msg);
		return (ret);
	}
	ret = (base64_encode(msg, size, hex));
	ft_strdel(&msg);
	return (ret);
}
