/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:16:03 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"

/*
**	ft_utoa_base function allocates sufficient memory and return a string
**		finished
**	by a '\0' representing the unsigned int n passed in parameter and convert
**		to a base.
**  The negative number must be managed.
**  if the allocated failed ft_utoa_base return NULL
**  @param n
**  @param base
**  @return string
*/

char	*ft_utoa_base(uint32_t n, int8_t base)
{
	return (ft_ulltoa_base(n, base));
}
