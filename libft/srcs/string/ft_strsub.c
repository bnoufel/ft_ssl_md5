/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:09:27 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	@param char	*s
**	The ft_strsub allocate a new string of size n
**	After that s1 was copy to the new allocate at start 'start', and
**	copy n char.
************************* RETURN VALUES **********************************
**	The ft_strsub function returns the the new ptr or NULL
**	if allocate fail.
*/

char		*ft_strsub(char const *s, uint32_t start, size_t n)
{
	char	*str;

	if (!(str = ft_strnew(n + 1)))
		return (NULL);
	ft_strncpy(str, s + start, n);
	return (str);
}
