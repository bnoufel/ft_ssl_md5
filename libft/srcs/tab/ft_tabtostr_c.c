/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabtostr_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:03:24 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "tab.h"

/*
**	Transform an array into a string with a char in paramater in separation.
************************* RETURN VALUES **********************************
**	The ft_tabtostr_c function returns the new string set to zero or NULL
**	if allocate fail.
*/

char		*ft_tabtostr_c(char **tab, const char c)
{
	size_t	i;
	size_t	len;
	char	*str;
	char	s2[2];

	s2[0] = c;
	s2[1] = '\0';
	i = 0;
	len = ft_tablen(tab);
	if (!(str = ft_strnew(1)))
		return (NULL);
	while (i < len)
	{
		if (!(str = ft_strjoinfree(str, (char *)tab[i], 1)))
			return (NULL);
		if (!(str = ft_strjoinfree(str, s2, 1)))
			return (NULL);
		i++;
	}
	return (str);
}
