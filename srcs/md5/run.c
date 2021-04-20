/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 05:34:02 by bnoufel           #+#    #+#             */
/*   Updated: 2021/04/20 05:34:03 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl.h"

int				go_hash(t_ssl *ssl)
{
	t_md5		*md5;

	if (ssl->digest & digest_md5)
	{
		if (!(md5 = ft_md5((uint8_t *)ssl->line, ssl->size_line)))
			return (0);
		print(ssl, md5);
		ft_memdel((void *)&md5);
	}
	else if (ssl->digest & digest_sha256)
		print_sha256_fd0(ssl);
	else if (ssl->digest & digest_sha224)
		print_sha224_fd0(ssl);
	else if (ssl->digest & digest_sha512)
		print_sha512_fd0(ssl);
	else if (ssl->digest & digest_sha384)
		print_sha384_fd0(ssl);
	ft_strdel(&ssl->line);
	return (0);
}

int				read_file(int fd, t_ssl *ssl)
{
	char		buff[4096 + 1];
	int			n;

	if (!(ssl->line = ft_memalloc(1)))
		return (0);
	ssl->size_line = 0;
	while ((n = read(fd, &buff, 4096)) == 4096)
	{
		if (!(ssl->line = ft_memjoinfreefirst(ssl->line,
			ssl->size_line, buff, 4096)))
			return (0);
		ssl->size_line += n;
	}
	if (n == -1)
	{
		ft_strdel(&ssl->line);
		return (0);
	}
	if (!(ssl->line = ft_memjoinfreefirst(ssl->line,
		ssl->size_line, buff, n)))
		return (0);
	ssl->size_line += n;
	return (go_hash(ssl));
}

static int		read_files(t_ssl *ssl)
{
	size_t		i;
	int			fd;

	i = 0;
	while (ssl->files && ssl->files[i])
	{
		if ((fd = open(ssl->files[i], O_RDONLY)) < 0)
		{
			ft_dprintf(2, "md5: %s: %s\n", ssl->files[i], NO_SUCH_FILE);
			i++;
			continue ;
		}
		if (read_file(fd, ssl))
			return (0);
		close(fd);
		i++;
	}
	return (1);
}

static void		ssl_md5(t_ssl *ssl)
{
	size_t		i;
	t_md5		*md5;

	i = 0;
	if (ssl->args & FLAG_p || (!(ssl->args & FLAG_s) && !ssl->files))
		read_file(0, ssl);
	if (ssl->args & FLAG_s)
	{
		while (ssl->opt.args_s[i])
		{
			if (!(md5 = ft_md5((uint8_t *)ssl->opt.args_s[i], 0)))
				return ;
			print(ssl, md5);
			ft_memdel((void *)&md5);
			i++;
		}
	}
	if (!read_files(ssl))
		return ;
}

void		(*g_ssl_exec[6])(t_ssl *ssl) = {
	ssl_md5, compute_sha256, compute_sha224, compute_sha384, compute_sha512};

int				run(t_ssl *ssl)
{
	g_ssl_exec[ssl->exec](ssl);
	free_and_exit(ssl);
	return (1);
}
