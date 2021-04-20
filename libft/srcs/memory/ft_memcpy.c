/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:04:27 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

/*
**	@param	void *dst
**	@param	void *src
**	@param 	size_t n
** 	ft_memcpy() function copies n bytes from memory area src to memory area dst.
**	If dst and src overlap, behavior is undefined.
**	Applications in which dst and src might overlap should use memmove(3)
**		instead.
************************* RETURN VALUES **********************************
**	The ft_memcpy() function returns the original value of dst.
*/

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	uint8_t		*s1;
	uint8_t		*s2;
	size_t		i;

	i = 0;
	s1 = (uint8_t *)dst;
	s2 = (uint8_t *)src;
	if (!dst && !src && n)
		return (dst);
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dst);
}
