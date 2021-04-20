/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:05:19 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "mem.h"

/*
**	@param char *dst
**	@param char *src
**	The ft_strcpy functions copy the string src to dst (including
**		the terminating `\0' character.)
**	The source and destination strings should not overlap,
**		as the behavior is undefined.
************************* RETURN VALUES **********************************
**	The ft_strcpy functions return dst.
*/

char			*ft_strcpy(char *dst, const char *src)
{
	size_t		len;

	len = ft_strlen(src);
	ft_memcpy(dst, src, len);
	dst[len] = '\0';
	return (dst);
}
