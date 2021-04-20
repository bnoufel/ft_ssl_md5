/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:09:06 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	@param char *s1
**	@param char	*s2
**	@param size_t n
**	The ft_strncat functions append a copy
**	of the null-terminated string s2 to the end of the null-terminated str s1,
**	then add a terminating `\0'.  The string s1 must have
**		sufficient space to hold the result.
**	The ft_strncat function appends not more than n characters from s2,
**		and then adds a terminating `\0'
************************* RETURN VALUES **********************************
**	The ft_strncat functions return the pointer s1.
*/

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len1;
	size_t	i;

	i = 0;
	len1 = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[i + len1] = s2[i];
		i++;
	}
	s1[len1 + i] = '\0';
	return (s1);
}
