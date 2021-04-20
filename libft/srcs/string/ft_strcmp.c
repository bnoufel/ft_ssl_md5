/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:05:17 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "mem.h"

/*
**	@param const char *s1
**	@param const char *s2
**	The ft_strcmp functions lexicographically
**		compare the null-terminated strings s1 and s2.
************************* RETURN VALUES **********************************
**	The ft_strcmp functions return an integer greater than, equal to,
**		or less than 0, according as the string s1 is greater than, equal to,
**		 or less than the string s2.
**	The comparison is done using unsigned characters, so that `\200'
**		is greater than `\0'.
*/

int				ft_strcmp(const char *s1, const char *s2)
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
	return (ft_strncmp(s1, s2, len));
}
