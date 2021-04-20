/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:04:39 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

/*
**	@param void *b
**	@param int c
**	@param size_t n
**	The ft_memset() function writes len bytes of value c
**	(converted to an unsigned char) to the string b.
************************* RETURN VALUES **********************************
**	The ft_memset() function returns its first argument.
*/

void			*ft_memset(void *b, int c, size_t n)
{
	uint8_t		*str;
	size_t		i;

	str = (uint8_t *)b;
	i = 0;
	while (i < n)
	{
		str[i] = (uint8_t)c;
		i++;
	}
	return (b);
}
