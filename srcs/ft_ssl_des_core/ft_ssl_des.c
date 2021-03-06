/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssl_des.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 05:33:27 by bnoufel           #+#    #+#             */
/*   Updated: 2021/04/20 05:33:29 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl.h"
#include "ft_ssl_des.h"

void				init_struct_des(t_ssl *ssl, t_ssl_des *des)
{
	des->args = 0;
	des->type = ssl->type;
	des->input_file_fd = -1;
	des->output_file_fd = 1;
	des->break_hash = WRAP;
}

static int			parser_des2(t_ssl_des *des, char **av, int *i)
{
	if ((!(ft_strcmp(av[*i], "-b"))
	|| !(ft_strcmp(av[*i], "-w"))) && av[*i + 1])
	{
		des->args |= FLAG_DES_b;
		des->break_hash = ft_atoi(av[*i + 1]);
		(*i)++;
	}
	else
		return (help_des(av[*i], 0));
	return (1);
}

int					parser_des(t_ssl_des *des, char **av)
{
	int				i;

	i = 1;
	while (av[++i])
	{
		if (!(ft_strcmp(av[i], "-a")))
			des->args |= FLAG_DES_a;
		else if (!(ft_strcmp(av[i], "-d")))
			des->args |= FLAG_DES_d;
		else if (!(ft_strcmp(av[i], "-e")))
			des->args |= FLAG_DES_e;
		else if (!(ft_strcmp(av[i], "-i")) && av[i + 1])
		{
			des->args |= FLAG_DES_i;
			if ((des->input_file_fd = open(av[i + 1], O_RDONLY)) < 0)
				return (open_error(av[i + 1], 0));
			i++;
		}
		else if (!(parser_des2(des, av, &i)))
			return (0);
	}
	return (1);
}

int					check_dependencies_arg(t_ssl_des *des)
{
	if (des->args & FLAG_DES_d && des->args & FLAG_DES_e)
		return (help(NULL, 0));
	if (!(des->args & FLAG_DES_e) && !(des->args & FLAG_DES_d))
		des->args |= FLAG_DES_e;
	return (1);
}

int					ft_ssl_des(t_ssl *ssl, char **av)
{
	t_ssl_des		des_struct;

	init_struct_des(ssl, &des_struct);
	if (!(parser_des(&des_struct, av)))
		return (1);
	if (!(check_dependencies_arg(&des_struct)))
		return (1);
	print_base64(&des_struct, base64(&des_struct, HEX));
	return (0);
}
