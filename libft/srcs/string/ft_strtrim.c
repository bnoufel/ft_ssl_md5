/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:09:29 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	@param char	*s1
**	The ft_strtrim remove whitespaces ('\n', '\t', ' ') at start and
**		and end of string s1.
************************* RETURN VALUES **********************************
**	The ft_strtrim function returns the the new ptr or NULL
**	if allocate fail.
*/

static int		spacetrim(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	size_t		len;
	size_t		start;
	char		*str;

	len = ft_strlen(s) - 1;
	start = 0;
	while (spacetrim(s[start]) && s[len])
		start++;
	while (spacetrim(s[len]) && s[start])
		len--;
	if (!(str = ft_strsub(s, start, (len - start) + 1)))
		return (NULL);
	return (str);
}
