/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:04:34 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

/*
**	@param void *dst
**	@param void *src
**	@param size_t n
**	The memmove() function copies n bytes from string src to string dst.
**	The two strings may overlap;
**	the copy is always done in a non-destructive manner.
************************* RETURN VALUES **********************************
**	The memmove() function returns the original value of dst.
*/

void			*ft_memmove(void *dst, const void *src, size_t n)
{
	int8_t		*s1;
	int8_t		*s2;

	s1 = (int8_t *)dst;
	s2 = (int8_t *)src;
	if (dst == src || !n)
		return (dst);
	if (dst < src)
		while (n--)
			*s1++ = *s2++;
	else
	{
		s1 += n;
		s2 += n;
		while (n--)
		{
			s1--;
			s2--;
			*s1 = *s2;
		}
	}
	return (dst);
}
