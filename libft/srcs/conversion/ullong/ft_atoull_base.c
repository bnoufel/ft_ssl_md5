/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoull_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:16:12 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

/*
**	The atoull() function converts the initial portion
**		of the string pointed to by str with a base to unsigned long long
**			representation.
*/

static int		nbr_in_base(char c, int8_t base)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10))
			|| (c >= 'a' && c <= ('a' + base - 10)));
}

static void		convert_base(char c, int8_t base, uint64_t *nb)
{
	if (c >= 'A' && c <= 'F')
		(*nb) = ((*nb) * base) + (c - 'A' + 10);
	else if (c >= 'a' && c <= 'f')
		(*nb) = ((*nb) * base) + (c - 'a' + 10);
	else
		(*nb) = ((*nb) * base) + (c - 48);
}

uint64_t		ft_atoull_base(const char *str, uint8_t base)
{
	uint64_t	nb;
	int			i;

	if (base < 2 || base > 16)
		return (0);
	nb = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	while (str[i] && nbr_in_base(str[i], base))
	{
		convert_base(str[i], base, &nb);
		i++;
	}
	return (nb);
}
