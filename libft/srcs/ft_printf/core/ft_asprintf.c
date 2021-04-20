/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:30:01 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "internal.h"

/*
**	The ft_asprintf() functions set *ret to be a pointer to a
**	buffer sufficiently large to hold the formatted string.  This pointer
**	should be passed to free(3) to release the allocated storage when it is
**	no longer needed.  If sufficient space cannot be allocated, ft_asprintf()
**	will return -1 and set ret to be a NULL pointer.
**	@param ret
**	@param str
**	@param ...
**	@return
*/

int				ft_asprintf(char **ret, const char *str, ...)
{
	t_core		core;
	va_list		ap;

	if (!str)
		return (-1);
	if (!((*ret) = ft_strnew(1)))
		return (-1);
	ft_init_struct(&core, 1);
	core.ret_asprintf = ret;
	core.type_printf |= is_asprintf;
	va_start(ap, str);
	if (!(ft_core(&core, str, 1, ap)))
		return (-1);
	va_end(ap);
	if (core.count == -2)
		return (-1);
	return (core.count);
}
