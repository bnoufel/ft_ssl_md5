/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base_no_malloc.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:16:06 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"

/*
**	ft_utoa_base_no_malloc function use a char[] in paramater and return it
**		finished by a '\0' representing the unsigned int n passed in parameter
**	and convert to a base.
**  The negative number must be managed.
**  @param n
**  @param base
**  @return string
*/

char	*ft_utoa_base_no_malloc(uint32_t n, int8_t base, char *dst)
{
	return (ft_ulltoa_base_no_malloc(n, base, dst));
}
