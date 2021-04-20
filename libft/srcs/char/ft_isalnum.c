/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:01:36 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

/*
**	@param int c
**	The ft_isalnum() function tests for any character for which ft_isalpha(3) or
**		ft_isdigit(3) is true.
**	The value of the argument must be representable as an unsigned char or
**		the value of EOF.
************************* RETURN VALUES **********************************
**	The ft_isalnum() function returns zero if the character tests false
**		and returns non-zero if the character tests true.
*/

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
