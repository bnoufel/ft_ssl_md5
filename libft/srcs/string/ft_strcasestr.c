/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:05:05 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "char.h"
#include "print.h"

/*
**	ft_strcasestr function locates the first occurrence of the null-terminated
**	string needle in the null-terminated string haystack with no case sensitive.
**	@param haystack
**	@param needle
**	@return If needle is an empty string, haystack is returned;
**	if needle occurs nowhere in haystack, NULL is returned;
**	otherwise a pointer to the first character of the first
**  occurrence of needle is returned.
*/

char		*ft_strcasestr(const char *haystack, const char *needle)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (!needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (needle[j]
				&& ft_tolower(haystack[i + j]) == ft_tolower(needle[j]))
			j++;
		if (!needle[j])
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
