/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_no_malloc.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:14:40 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"
#include "str.h"
#include <limits.h>

/*
**	ft_itoa_base_no_malloc function use a char[] in paramater and return it
**		finished by a '\0' representing the integer n passed in parameter and
**	convert to a base.
**  The negative number must be managed.
**  @param n
**  @param base
**  @return string
*/

char	*ft_itoa_base_no_malloc(int32_t n, int8_t base, char *dst)
{
	if (n == INT_MIN)
		return (ft_strncpy(dst, "-2147483648", 12));
	return (ft_lltoa_base_no_malloc(n, base, dst));
}
