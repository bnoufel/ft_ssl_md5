/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:09:11 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"
#include "str.h"

/*
**	@param const char *s1
**	@param const char *s2
**	@param size_t n
**	The ft_strncmp functions lexicographically
**		compare the null-terminated strings s1 and s2.
**	The ft_strncmp function compares not more than n characters.
**	Because ft_strncmp is designed for comparing strings rather
**		than binary data, characters that appear after a `\0'
**		character are not compared.
************************* RETURN VALUES **********************************
**	The ft_strncmp functions return an integer greater than, equal to,
**		or less than 0, according as the string s1 is greater than, equal to,
**		or less than the string s2.
**	The comparison is done using unsigned characters, so that `\200' is greater
**	 than `\0'.
*/

int				ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		len1;
	size_t		len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len1 < n)
		n = len1 + 1;
	if (len2 < n)
		n = len2 + 1;
	return (ft_memcmp(s1, s2, n));
}
