/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:09:35 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	@param char	*s
**	The ft_strsub() allocate a new string of size n
**	After that s1 was copy to the new allocate at start 'start', and
**	copy n char.
************************* RETURN VALUES **********************************
**	The ft_strsub() function returns the the new ptr or NULL
**	if allocate fail.
*/

char		*ft_substr(char const *s, uint32_t start, size_t n)
{
	return (ft_strsub(s, start, n));
}
