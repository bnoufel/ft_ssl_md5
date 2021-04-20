/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:04:15 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

/*
**	The ft_calloc() function contiguously allocates enough space for count
**		objects that are size bytes of memory each and returns a pointer to
**		the allocated memory.  The allocated memory is filled with bytes of
**		value zero.
************************* RETURN VALUES **********************************
**	The ft_calloc() function returns the the new ptr set to zero or NULL
**		if allocate fail.
*/

void		*ft_calloc(size_t count, size_t size)
{
	return (ft_memalloc(count * size));
}
