/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:15:04 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"
#include "str.h"
#include "mem.h"
#include <limits.h>

/*
**	ft_lltoa_base function allocates sufficient memory and return a string
**		finished
**	by a '\0' representing the  long long n passed in parameter and convert to a
**		base.
**  The negative number must be managed.
**  if the allocated failed ft_lltoa_base return NULL
**  @param n
**  @param base
**  @return string
*/

char		*ft_lltoa_base(int64_t n, int8_t base)
{
	char	tab[17];
	char	*str;
	int64_t	len;

	if (n == LLONG_MIN && base == 10)
		return (ft_strdup("-9223372036854775808"));
	if (base < 2 || base > 16)
		return (NULL);
	if (!n)
		return (ft_strdup("0"));
	len = ft_llonglen_base(n, base);
	ft_strncpy(tab, "0123456789ABCDEF", 17);
	if (!(str = ft_strnew(len + 1)))
		return (NULL);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (n > 0)
	{
		str[len--] = tab[n % base];
		n /= base;
	}
	return (str);
}
