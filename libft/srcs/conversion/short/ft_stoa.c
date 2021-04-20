/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:15:26 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"
#include "str.h"
#include <limits.h>

/*
**  ft_stoa function allocates sufficient memory and return a string finished
**  by a '\0' representing the short n passed in parameter.
**  The negative number must be managed.
**  if the allocated failed ft_stoa return NULL
**  @param n
**  @return string
*/

char	*ft_stoa(int16_t n)
{
	if (n == SHRT_MIN)
		return (ft_strdup("-32768"));
	return (ft_lltoa_base(n, 10));
}
