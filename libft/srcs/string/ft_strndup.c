/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:09:14 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "str.h"
#include "mem.h"

/*
**	@param const char *s
**	The ft_strndup function copies at most n characters from the string s1
**	always NULL terminating the copied string.
*/

char			*ft_strndup(const char *s1, size_t n)
{
	char		*str;

	if (!(str = ft_strnew(n + 1)))
		return (NULL);
	ft_memcpy(str, s1, n);
	return (str);
}
