/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:01:39 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

/*
**	@param int c
**	The ft_isalpha() function tests for any character for which ft_isupper(3) or
**		ft_islower(3) is true.
**	The value of the argument must be representable as an unsigned char or
**		the value of EOF.
************************* RETURN VALUES **********************************
**	The ft_isalpha() function returns zero if the character tests false
**		and returns non-zero if the character tests true.
*/

int		ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	return (0);
}
