/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:09:25 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "mem.h"

/*
**	The ft_strstr function locates the first occurrence of the null-terminated
**	string needle in the null-terminated string haystack.
**	@param haystack
**	@param needle
**	@return If needle is an empty string, haystack is returned;
**	if needle occurs nowhere in haystack, NULL is returned;
**	otherwise a pointer to the first character of the first
**  occurrence of needle is returned.
*/

char			*ft_strstr(const char *haystack, const char *needle)
{
	const void	*big = (const void *)haystack;
	const void	*little = (const void *)needle;
	size_t		big_len;
	size_t		little_len;

	big_len = ft_strlen(haystack);
	little_len = ft_strlen(needle);
	return ((char *)ft_memmem(big, big_len, little, little_len));
}
