/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:30:28 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "internal.h"

/*
**	ft_printf functions write output to stdout, the standard output stream.
**	@param str
**	@param ...
**	@return
*/

int				ft_printf(const char *str, ...)
{
	t_core		core;
	int			fd;
	va_list		ap;

	if (!str)
		return (-1);
	fd = 1;
	ft_init_struct(&core, fd);
	core.ret_asprintf = NULL;
	core.type_printf |= is_printf;
	va_start(ap, str);
	if (!(ft_core(&core, str, fd, ap)))
		return (-1);
	va_end(ap);
	if (core.count == -2)
		return (-1);
	return (core.count);
}
