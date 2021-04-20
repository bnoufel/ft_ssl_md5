/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:05:25 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	@param const char *s1
**	@param const char *s2
**	The ft_strequ functions lexicographically
**		compare the null-terminated strings s1 and s2.
************************* RETURN VALUES **********************************
**	The ft_strequ functions return 0 or 1.
**	1 if is equal else 0
*/

int			ft_strequ(char const *s1, char const *s2)
{
	int		res;

	res = ft_strcmp(s1, s2);
	if (res == -1 || res == 1)
		return (0);
	return (1);
}
