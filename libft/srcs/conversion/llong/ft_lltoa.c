/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:15:03 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"
#include "str.h"
#include <limits.h>

/*
**  ft_lltoa function allocates sufficient memory and return a string finished
**  by a '\0' representing the long long n passed in parameter.
**  The negative number must be managed.
**  if the allocated failed ft_lltoa return NULL
**  @param n
**  @return string
*/

char	*ft_lltoa(int64_t n)
{
	if (n == 0x7fffffffffffffffLL - 1)
		return (ft_strdup("-9223372036854775808"));
	return (ft_lltoa_base(n, 10));
}
