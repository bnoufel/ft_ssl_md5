/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:05:03 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "char.h"

/*
**	@param const char *s1
**	@param const char *s2
**	The ft_strcasecmp() functions lexicographically
**		compare the null-terminated strings s1 and s2 with no case sensitive.
************************* RETURN VALUES **********************************
**	The ft_strcasecmp() functions return an integer greater than, equal to,
**		or less than 0, according as the string s1 is greater than, equal to,
**		 or less than the string s2.
**	The comparison is done using unsigned characters, so that `\200'
**	is greater than `\0'.
*/

static size_t	ft_get_big_len(const char *s1, const char *s2)
{
	size_t		ls1;
	size_t		ls2;
	size_t		len;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	if (ls1 > ls2)
		len = ls1;
	else
		len = ls2;
	return (len);
}

int				ft_strcasecmp(const char *s1, const char *s2)
{
	size_t		len;
	size_t		i;
	uint8_t		*str1;
	uint8_t		*str2;

	str1 = (uint8_t *)s1;
	str2 = (uint8_t *)s2;
	if (str1 == str2)
		return (0);
	i = 0;
	len = ft_get_big_len(s1, s2);
	while (i < len)
	{
		if (ft_tolower(str1[i]) != ft_tolower(str2[i]))
			return (ft_tolower(str1[i]) < ft_tolower(str2[i]) ? -1 : 1);
		i++;
	}
	return (0);
}
