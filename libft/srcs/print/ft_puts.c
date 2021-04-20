/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:03:50 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

/*
**	@param char	*str
**	writes the string s, and a terminating newline character
************************* RETURN VALUES **********************************
**	ft_puts return a newline
*/

int		ft_puts(const char *str)
{
	if (!str)
		ft_putendl("(null)");
	else
		ft_putendl(str);
	return (10);
}
