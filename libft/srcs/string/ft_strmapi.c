/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:09:02 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	ft_strmapi Apply the function f to each character of the character string
**	passed in
**	parameter by specifying its index to create a new “fresh” string (with
**	malloc (3)) resulting from the successive applications of f.
**	@param s
**	@param f
**	@return
*/

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	uint32_t	i;
	char		*str;

	if (!(str = ft_strnew(ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
