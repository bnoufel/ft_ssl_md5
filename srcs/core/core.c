/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 05:32:44 by bnoufel           #+#    #+#             */
/*   Updated: 2021/04/20 05:32:45 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl.h"
#include <stdlib.h>

int				core(int ac, char **av)
{
	t_ssl		ssl;

	if (ac == 1 || !ft_strcmp(av[1], "-h") || !ft_strcmp(av[1], "--help"))
		return (help(NULL, 1));
	ssl.digest = 0;
	ssl.args = 0;
	ssl.exec = -1;
	ssl.type = 0;
	digest(av[1], &ssl);
	check_type(&ssl);
	if (ssl.exec < 0 || ssl.exec > 6)
		return (0);
	if (ssl.type & is_md5)
		return (ft_ssl_md5(&ssl, ac, av));
	else if (ssl.type & is_des)
		return (ft_ssl_des(&ssl, av));
	return (1);
}
