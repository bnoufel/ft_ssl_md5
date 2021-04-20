/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:05:12 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	@param char *s1
**	@param char	*s2
**	The ft_strcat() functions append a copy
**	of the null-terminated string s2 to the end of the null-terminated
**	string s1, then add a terminating `\0'. The string s1 must have sufficient
**	space to hold the result.
************************* RETURN VALUES **********************************
**	The ft_strcat() functions return the pointer s1.
*/

char		*ft_strcat(char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ft_strncpy(s1 + len1, s2, len2 + 1);
	return (s1);
}
