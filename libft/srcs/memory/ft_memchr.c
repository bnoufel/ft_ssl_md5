/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:04:23 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

/*
**	@param void *s
**	@param int c
**	@param size_t n
**	The ft_memchr() function locates the first occurrence of c
**		(converted to an unsigned char) in string s.
************************* RETURN VALUES **********************************
**	The ft_memchr() function returns a pointer to the byte located,
**		or NULL if no such byte exists within n bytes.
*/

void			*ft_memchr(const void *s, int c, size_t n)
{
	uint8_t		*s1;
	size_t		i;

	i = 0;
	s1 = (uint8_t *)s;
	while (i < n)
	{
		if (s1[i] == (uint8_t)c)
			return (s1 + i);
		i++;
	}
	return (NULL);
}
