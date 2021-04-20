/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base_no_malloc.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:15:18 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"
#include "str.h"
#include <limits.h>

/*
**	ft_ltoa_base_no_malloc function use a char[] in paramater and return it
**		finished by a '\0' representing the long n passed in parameter and
**	convert to a base.
**  The negative number must be managed.
**  @param n
**  @param base
**  @return string
*/

char	*ft_ltoa_base_no_malloc(long n, int8_t base, char *dst)
{
	if (n == LONG_MIN)
		return (ft_strncpy(dst, "-9223372036854775808", 22));
	return (ft_lltoa_base_no_malloc(n, base, dst));
}
