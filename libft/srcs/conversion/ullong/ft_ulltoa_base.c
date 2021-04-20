/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:16:20 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"
#include "str.h"
#include <stdlib.h>

/*
**	ft_ulltoa_base function allocates sufficient memory and return a string
**		finished
**	by a '\0' representing the  unsigned long long n passed in parameter and
**		convert to a base.
**  The negative number must be managed.
**  if the allocated failed ft_ulltoa_base return NULL
**  @param n
**  @param base
**  @return string
*/

char	*ft_ulltoa_base(uint64_t n, int8_t base)
{
	uint64_t	len;
	char		*str;
	char		tab[17];

	if (base > 16 || base < 2)
		return (NULL);
	if (!n)
		return (ft_strdup("0"));
	ft_strncpy(tab, "0123456789ABCDEF", 17);
	len = ft_ullonglen_base(n, base) + 1;
	if (!(str = ft_strnew(len + 1)))
		return (NULL);
	while (len--)
	{
		str[len] = tab[n % base];
		n /= base;
	}
	return (str);
}
