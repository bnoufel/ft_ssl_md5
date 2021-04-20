/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:14:33 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"
#include "str.h"
#include <limits.h>

/*
**	ft_itoa_base function allocates sufficient memory and return a string
**		finished by a '\0' representing the integer n passed in parameter and
**	convert to a base.
**  The negative number must be managed.
**  if the allocated failed ft_itoa_base return NULL
**  @param n
**  @param base
**  @return string
*/

char	*ft_itoa_base(int32_t n, int8_t base)
{
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	return (ft_lltoa_base(n, base));
}
