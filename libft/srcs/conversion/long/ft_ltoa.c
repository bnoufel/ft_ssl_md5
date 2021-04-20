/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:15:14 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"
#include "str.h"
#include <limits.h>

/*
**  ft_ltoa function allocates sufficient memory and return a string finished
**  by a '\0' representing the long n passed in parameter.
**  The negative number must be managed.
**  if the allocated failed ft_ltoa return NULL
**  @param n
**  @return string
*/

char	*ft_ltoa(long n)
{
	if (n == LONG_MIN)
		return (ft_strdup("-9223372036854775808"));
	return (ft_lltoa_base(n, 10));
}
