/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base_no_malloc.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:15:06 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"
#include "str.h"
#include <limits.h>

/*
**	ft_lltoa_base_no_malloc function use a char[] in paramater and return it
**		finished by a '\0' representing the  long long n passed in parameter and
**	convert to a base.
**  The negative number must be managed.
**  @param n
**  @param base
**  @return string
*/

char		*ft_lltoa_base_no_malloc(int64_t n, int8_t base, char *dst)
{
	char	tab[17];
	int64_t	len;

	if (n == LONG_MAX)
		return (ft_strncpy(dst, "9223372036854775808", 21));
	if (base < 2 || base > 16)
		return (NULL);
	if (!n)
		return (ft_strncpy(dst, "0", 2));
	len = ft_llonglen_base(n, base);
	ft_strncpy(tab, "0123456789ABCDEF", 17);
	if (n < 0)
	{
		n = -n;
		dst[0] = '-';
	}
	while (--len)
	{
		dst[len] = tab[n % base];
		n /= base;
	}
	return (dst);
}
