/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:16:01 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"

/*
**  ft_utoa function allocates sufficient memory and return a string finished
**  by a '\0' representing the unsigned int n passed in parameter.
**  The negative number must be managed.
**  if the allocated failed ft_utoa return NULL
**  @param n
**  @return string
*/

char	*ft_utoa(uint32_t n)
{
	return (ft_ulltoa_base(n, 10));
}
