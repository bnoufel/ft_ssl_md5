/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:04:25 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

/*
**	@param void *s
**	@param int c
**	@param size_t n
**	The ft_memcmp() function compares byte string s1 against byte string s2
**	Both strings are assumed to be n bytes long.
************************* RETURN VALUES **********************************
**	The ft_memcmp() function returns zero if the two strings are identical,
**		otherwise returns the difference between the first two differing bytes
**		(treated as uint8_t values, so that `\200' is greater than `\0').
**	Zero-length strings are always identical.
**	This behavior is not required by C and portable code should only
**		depend on the sign of the returned value.
*/

int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
	uint8_t		*p1;
	uint8_t		*p2;
	size_t		i;

	i = 0;
	p1 = (uint8_t *)s1;
	p2 = (uint8_t *)s2;
	if (s1 == s2 || !n)
		return (0);
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] < p2[i] ? -1 : 1);
		i++;
	}
	return (0);
}
