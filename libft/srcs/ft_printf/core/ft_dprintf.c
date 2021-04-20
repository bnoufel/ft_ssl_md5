/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:30:04 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "internal.h"

/*
**	ft_dprintf write output to the given file descriptor.
**	@param fd
**	@param str
**	@param ...
**	@return
*/

int				ft_dprintf(int fd, const char *str, ...)
{
	t_core		core;
	va_list		ap;

	if (!str)
		return (-1);
	ft_init_struct(&core, fd);
	core.type_printf |= is_dprintf;
	va_start(ap, str);
	if (!(ft_core(&core, str, fd, ap)))
		return (-1);
	va_end(ap);
	if (core.count == -2)
		return (-1);
	return (core.count);
}
