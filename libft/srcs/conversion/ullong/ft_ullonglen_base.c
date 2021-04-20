/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullonglen_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:16:13 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>

/*
**	@param int64_t n
**	@param int base
**	Calculate size of value and return it
*/

uint64_t			ft_ullonglen_base(uint64_t n, int base)
{
	uint64_t		len;

	len = 0;
	if (base < 2 || base > 16)
		return (0);
	if (!n)
		return (1);
	while (n /= base)
		len++;
	return (len);
}
