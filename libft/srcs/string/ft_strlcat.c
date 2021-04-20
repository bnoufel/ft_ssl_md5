/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:07:00 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	The ft_strlcat concatenate strings with the same input parameters and
**	output result as ft_snprintf.  They are designed to be safer, more
**	consistent, and less error prone replacements for the easily misused
**	functions ft_strncat.
**	ft_strlcat take the full size of the destination buffer and guarantee
**	NUL-termination if there is room.  Note that room for the NUL should be
**	included in dstsize.
**	ft_strlcat appends string src to the end of dst.  It will append at most
**	dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
**	dstsize is 0 or the original dst string was longer than dstsize (in
**	practice this should not happen as it means that either dstsize is
**	incorrect or that dst is not a proper string).
**	@param dst
**	@param src
**	@param size
**	@return
*/

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		ldst;
	size_t		lsrc;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	i = 0;
	if (size <= ldst)
		return (size + lsrc);
	while (src[i] && i < (size - ldst - 1))
	{
		dst[ldst + i] = src[i];
		i++;
	}
	dst[ldst + i] = '\0';
	return (ldst + lsrc);
}
