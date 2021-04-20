/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:09:20 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
**	@param const char *s
**	The ft_strnlen function attempts to compute the length of s,
**	but never scans beyond the first maxlen bytes of s.
************************* RETURN VALUES **********************************
**	The ft_strnlen function returns either the same result
**	as strlen() or maxlen, whichever is smaller.
*/

size_t			ft_strnlen(const char *s, size_t maxlen)
{
	size_t		len;

	len = ft_strlen(s);
	if (len < maxlen)
		return (len);
	return (maxlen);
}
