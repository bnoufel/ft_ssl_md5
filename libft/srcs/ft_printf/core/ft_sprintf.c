/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:30:35 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "internal.h"

/*
**	The ft_sprintf functions effectively assume a size of INT_MAX + 1.
**	@param ret
**	@param str
**	@param ...
**	@return
*/

int				ft_sprintf(char *ret, const char *str, ...)
{
	t_core		core;
	va_list		ap;
	char		*ptr;

	if (!str)
		return (-1);
	if (!(ptr = ft_strnew(1)))
		return (-1);
	ft_init_struct(&core, 1);
	core.ret_asprintf = &ptr;
	core.type_printf |= is_sprintf;
	va_start(ap, str);
	if (!(ft_core(&core, str, 1, ap)))
		return (-1);
	va_end(ap);
	ft_strcat(ret, *(core.ret_asprintf));
	ft_strdel(core.ret_asprintf);
	if (core.count == -2)
		return (-1);
	return (core.count);
}
