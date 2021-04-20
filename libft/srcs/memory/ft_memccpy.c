/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:04:21 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

/*
**	@param	void *dst
**	@param	void *src
**	@param 	int c
**	@param 	size_t n
** 	ft_memcpy() function copies n bytes from memory area src to memory area dst.
**	If dst and src overlap, behavior is undefined.
**	Applications in which dst and src might overlap should use memmove instead.
**	The source and destination strings should not overlap,
**		as the behavior is undefined.
************************* RETURN VALUES **********************************
**	The ft_memcpy() function returns the original value of dst.
*/

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	uint8_t		*s1;
	uint8_t		*s2;
	size_t		i;

	i = 0;
	s1 = (uint8_t *)dst;
	s2 = (uint8_t *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s2[i] == (uint8_t)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
