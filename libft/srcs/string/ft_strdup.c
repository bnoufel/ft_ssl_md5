/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:05:23 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "mem.h"
#include <stdlib.h>

/*
**	@param const char *s
**	The ft_strdup function allocates sufficient memory for a copy of the
**	string s1, does the copy, and returns a pointer to it.
**	The pointer may subsequently be used as an argument to the function free.
*/

char			*ft_strdup(const char *s1)
{
	size_t		len;
	char		*str;

	len = ft_strlen(s1);
	if (!(str = ft_strnew(len + 1)))
		return (NULL);
	ft_strncpy(str, s1, len);
	return (str);
}
