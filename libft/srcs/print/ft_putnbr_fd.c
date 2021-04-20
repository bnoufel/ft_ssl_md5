/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:03:49 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

/*
**	@param int n
**	@param int fd
**	write a number to a specific fd
*/

void	ft_putnbr_fd(int n, int fd)
{
	uint32_t	nb;

	nb = (uint32_t)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb > 9)
		(ft_putnbr_fd(nb / 10, fd));
	ft_putchar_fd(nb % 10 + '0', fd);
}
