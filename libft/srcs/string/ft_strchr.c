/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:05:14 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "mem.h"

/*
**	@param const char *s
**	@param int c
**	The ft_strchr function locates the first occurrence of c
**		(converted to an unsigned char) in string s.
************************* RETURN VALUES **********************************
**	The ft_strchr function returns a pointer to the byte located,
**		or NULL if no such byte exists within n bytes.
*/

char			*ft_strchr(const char *s, int c)
{
	size_t		size;

	size = ft_strlen(s);
	return (ft_memchr(s, c, size + 1));
}
