/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:09:13 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"
#include "str.h"

/*
**	@param char 	*dst
**	@param char 	*src
**	@param size_t 	len
**	The ft_strncpy functions copy at most len characters from src into dst.
**	If src is less than len characters long, the remainder of dst is filled.
**		with `\0' characters.  Otherwise, dst is not terminated.
**	The source and destination strings should not overlap,
**		as the behavior is undefined.
************************* RETURN VALUES **********************************
**	The ft_strncpy functions return dst.
*/

char			*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;

	i = ft_strlen(src);
	ft_memcpy(dst, src, len);
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
