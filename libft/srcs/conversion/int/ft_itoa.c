/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:14:29 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"
#include "str.h"
#include <limits.h>

/*
**  ft_itoa function allocates sufficient memory and return a string finished
**  by a '\0' representing the integer n passed in parameter.
**  The negative number must be managed.
**  if the allocated failed ft_itoa return NULL
**  @param n
**  @return string
*/

char	*ft_itoa(int32_t n)
{
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	return (ft_lltoa_base(n, 10));
}
