/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoinfreefirst.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:08:44 by bnoufel           #+#    #+#             */
/*   Updated: 2020/04/05 16:01:31 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "mem.h"
#include <stdlib.h>

/*
**	@param char	*s1
**	@param char	*s2
**	@param short tofree
**	The ft_memjoinfree() allocate a new string of size s1 + s2
**	After that s1 was copy to the new allocate, and
**	s2 was concatenate.
**	And free s1 or s2 or both with param `tofree`
************************* RETURN VALUES **********************************
**	The ft_strjoinfree() function returns the the new ptr or NULL
**	if allocate fail.
*/

void			*ft_memjoinfreefirst(void *s1, size_t l1, void *s2, size_t l2)
{
	void		*res;
	char		*tmp;

	if (l2 == 0 || !s1 || !s2)
		return (s1);
	if (!(res = malloc(l1 + l2)))
	{
		free(s1);
		s1 = NULL;
		return (NULL);
	}
	ft_memcpy(res, s1, l1);
	tmp = (char *)res;
	ft_memcpy(&(tmp[l1]), s2, l2);
	free(s1);
	s1 = NULL;
	return (res);
}
