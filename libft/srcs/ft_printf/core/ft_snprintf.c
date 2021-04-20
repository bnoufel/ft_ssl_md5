/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_snprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:30:32 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "internal.h"

/*
**	The ft_snprintf functions will write at most size-1 of the
**		characters printed into the output string (the size'th character then
**		gets the terminating `\0'); if the return value is greater than or
**		equal to the size argument, the string was too short and some of the
**		printed characters were discarded.
**		The output is always null-terminated, unless size is 0.
**	@param ret
**	@param size
**	@param str
**	@param ...
**	@return
*/

int				ft_snprintf(char *ret, size_t size, const char *str, ...)
{
	t_core		core;
	va_list		ap;
	char		*ptr;
	size_t		len;

	if (!str)
		return (-1);
	if (!(ptr = ft_strnew(1)))
		return (-1);
	ft_init_struct(&core, 1);
	core.ret_asprintf = &ptr;
	core.type_printf |= is_snprintf;
	va_start(ap, str);
	if (!(ft_core(&core, str, 1, ap)))
		return (-1);
	va_end(ap);
	if (!core.len)
		core.len = core.index;
	len = (core.len < size) ? core.len : size;
	ft_strncat(ret, *(core.ret_asprintf), len);
	ft_strdel(core.ret_asprintf);
	if (core.count == -2)
		return (-1);
	return (core.count);
}
