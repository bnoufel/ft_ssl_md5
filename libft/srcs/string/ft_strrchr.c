/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:09:23 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"
#include "str.h"

/*
**	@param void *s
**	@param int c
**	@param size_t n
**	The ft_strrchr function locates the first occurrence of c
**		(converted to an unsigned char) in string s.
************************* RETURN VALUES **********************************
**	The ft_strrchr function returns a pointer to the byte
**		located begging to the end
**	or NULL if no such byte exists within n bytes.
*/

char			*ft_strrchr(const char *s, int c)
{
	return (ft_memrchr(s, c, ft_strlen(s) + 1));
}
