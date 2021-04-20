/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:04:47 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "tab.h"

/*
**	ft_split split a strings with the char c delimiter to a tab was allocate.
**	@param str
**	@param c
**	@return NULL if allocate failed or return the new tab
*/

static size_t		ft_count_words(char const *s, char c)
{
	size_t			words;
	size_t			i;

	words = 0;
	i = 0;
	while (s[i++])
	{
		if (s[i] == c)
			continue ;
		words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

char				**ft_split(const char *str, char c)
{
	char			**tab;
	size_t			j;
	size_t			i;
	size_t			len;

	j = 0;
	i = 0;
	if (!(tab = ft_tabnew(ft_count_words(str, c) + 1)))
		return (NULL);
	while (str[i])
	{
		if (str[i] != c)
		{
			len = ft_strlen_c(str + i, c);
			if (!(tab[j] = ft_strsub(str + i, 0, len)))
				return (NULL);
			i += len;
			j++;
		}
		else
			i++;
	}
	tab[j] = 0;
	return (tab);
}
