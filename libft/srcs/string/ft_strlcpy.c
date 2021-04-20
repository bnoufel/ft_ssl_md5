/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:08:50 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

/*
**	The ft_strlcpy functions copy strings with the same input parameters and
**	output result as snprintf(3).  They are designed to be safer, more
**	consistent, and less error prone replacements for the easily misused
**  functions ft_strncpy.
**	ft_strlcpy take the full size of the destination buffer and
**	guarantee NUL-termination if there is room.  Note that room for the NUL
**	should be included in dstsize.
**	ft_strlcpy copies up to dstsize - 1 characters from the string src to dst,
**	NUL-terminating the result if dstsize is not 0.
**	@param dest
**	@param src
**	@param size
**	@return
*/

uint32_t		ft_strlcpy(char *dest, char *src, uint32_t size)
{
	uint32_t	count;
	uint32_t	i;

	count = 0;
	while (src[count])
		count++;
	if (!size)
		return (count);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
