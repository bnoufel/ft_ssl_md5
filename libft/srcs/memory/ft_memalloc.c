/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:04:18 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"
#include <stdlib.h>

/*
**	@param size_t size
**	The ft_memalloc() allocate a new string of size n
************************* RETURN VALUES **********************************
**	The ft_memalloc() function returns the the new ptr set to zero or NULL
**		if allocate fail.
*/

void		*ft_memalloc(size_t n)
{
	void	*ptr;

	if (!(ptr = malloc(n)))
		return (NULL);
	return (ft_memset(ptr, 0, n));
}
