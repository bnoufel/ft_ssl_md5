/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:08:41 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include <stdlib.h>

/*
**	@param char	*s1
**	@param char	*s2
**	The ft_strjoin allocate a new string of size s1 + s2
**	After that s1 was copy to the new allocate, and
**	s2 was concatenate.
************************* RETURN VALUES **********************************
**	The ft_strjoin function returns the the new ptr or NULL
**	if allocate fail.
*/

char			*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	size_t		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = ft_strnew(len + 1)))
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
