/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:14:56 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"
#include "char.h"

/*
**	The ft_atoll_base() function converts the initial portion
**		of the string pointed to by str with a base to long long representation.
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

int64_t			ft_atoll_base(const char *str, int8_t base)
{
	uint64_t	nb;
	int			i;
	int			neg;

	if (base < 2 || base > 16)
		return (0);
	nb = 0;
	i = 0;
	neg = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] && nbr_in_base(str[i], base))
	{
		convert_base(str[i], base, &nb);
		i++;
	}
	return (nb * neg);
}
