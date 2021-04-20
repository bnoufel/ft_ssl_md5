/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base_no_malloc.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:16:23 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"
#include "str.h"
#include <stdlib.h>

/*
**	ft_ulltoa_base_no_malloc function use a char[] in paramater and return it
**		finished by a '\0' representing the  unsigned long long n passed in
**	parameter and convert to a base.
**  The negative number must be managed.
**  @param n
**  @param base
**  @return string
*/

char	*ft_ulltoa_base_no_malloc(uint64_t n, int8_t base, char *dst)
{
	uint64_t	len;
	char		tab[17];

	if (base > 16 || base < 2)
		return (NULL);
	if (!n)
		return (ft_strncpy(dst, "0", 2));
	ft_strncpy(tab, "0123456789ABCDEF", 17);
	len = ft_ullonglen_base(n, base);
	while (--len)
	{
		dst[len] = tab[n % base];
		n /= base;
	}
	return (dst);
}
