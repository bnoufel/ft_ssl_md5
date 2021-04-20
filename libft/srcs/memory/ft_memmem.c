/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:04:30 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"
#include <stdint.h>
#include <stdio.h>

/*
**	ft_memmem function locates the first occurrence of the byte string little
**		in the byte string big.
**	@param big
**	@param big_len
**	@param little
**	@param little_len
************************* RETURN VALUES **********************************
**	@return If big_len is smaller than little_len, if little_len is 0,
**		if big_len is 0 or if little occurs nowhere in big, NULL is returned;
**		otherwise a pointer to the first character of the first occurrence of
**		little is returned.
*/

void	*ft_memmem(const void *big, size_t big_len, const void *little,
			size_t little_len)
{
	uint8_t		*haystack;
	uint8_t		*needle;
	size_t		i;
	size_t		j;

	i = 0;
	haystack = (uint8_t *)big;
	needle = (uint8_t *)little;
	if (!needle)
		return ((void *)big);
	while (i < big_len)
	{
		j = 0;
		while (j < little_len && haystack[i + j] == needle[j])
		{
			j++;
			if ((i + j) > big_len)
				return (NULL);
		}
		if (!needle[j])
			return ((void *)big + i);
		i++;
	}
	return (NULL);
}
