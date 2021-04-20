/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:30:06 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "internal.h"

/*
**	ft_fprintf write output to the given output stream.
**	@param stream
**	@param str
**	@param ...
**	@return
*/

int				ft_fprintf(FILE *stream, const char *str, ...)
{
	t_core		core;
	va_list		ap;

	if (!str)
		return (-1);
	ft_init_struct(&core, 1);
	core.type_printf |= is_fprintf;
	core.stream = stream;
	va_start(ap, str);
	if (!(ft_core(&core, str, 1, ap)))
		return (-1);
	va_end(ap);
	if (core.count == -2)
		return (-1);
	return (core.count);
}
