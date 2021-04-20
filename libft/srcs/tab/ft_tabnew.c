/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:03:16 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"
#include <stdlib.h>

/*
**	@param const size_t size
**	The ft_tabnew() allocate a new tab of size `size`
************************* RETURN VALUES **********************************
**	The ft_tabnew() function returns the new tab set to zero or NULL
**	if allocate fail.
*/

char		**ft_tabnew(size_t size)
{
	char	**str;

	if (!(str = (char **)ft_memalloc(sizeof(char *) * (size + 1))))
		return (NULL);
	return (str);
}
