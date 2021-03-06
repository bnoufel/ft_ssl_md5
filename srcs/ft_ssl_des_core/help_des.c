/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_des.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 05:33:32 by bnoufel           #+#    #+#             */
/*   Updated: 2021/04/20 05:33:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			help_des(char *arg, int ret)
{
	if (arg)
		ft_printf("ft_ssl: '%s' is not valid\n\n", arg);
	ft_printf("ft_ssl: [DIGEST] [OPTIONS]\n\n");
	ft_printf("Standard commands:\n\nMessage Digest commands:\n");
	ft_printf("md5\nsha256\nsha1\nsha224\nsha384\nsha512\n\n");
	ft_printf("[OPTIONS] (ft_ssl_md5):\n\n");
	ft_printf("-p: echo STDIN to STDOUT and append the checksum to STDOUT.\n");
	ft_printf("-q: quiet mode.\n");
	ft_printf("-r: reverse the format of the output.\n");
	ft_printf("-s: print the sum of the given string.\n\n");
	ft_printf("[OPTIONS] base64:\n\n");
	ft_printf("-a: decode/encode the input/output in base64, depending on the"
		" encrypt mode\n");
	ft_printf("-b, break encoded string into num character lines\n");
	ft_printf("-d, decrypt mode\n");
	ft_printf("-e, encrypt mode (default)\n");
	return (ret);
}
