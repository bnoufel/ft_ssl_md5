/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:08:44 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include <stdlib.h>

/*
**	@param char	*s1
**	@param char	*s2
**	@param short tofree
**	The ft_strjoinfree() allocate a new string of size s1 + s2
**	After that s1 was copy to the new allocate, and
**	s2 was concatenate.
**	And free s1 or s2 or both with param `tofree`
************************* RETURN VALUES **********************************
**	The ft_strjoinfree() function returns the the new ptr or NULL
**	if allocate fail.
*/

static void		free_ptr(char **s1, char **s2, short tofree)
{
	if (tofree == 1 || tofree == 3)
		ft_strdel(s1);
	if (tofree == 2 || tofree == 3)
		ft_strdel(s2);
}

char			*ft_strjoinfree(char *s1, char *s2, short tofree)
{
	char		*str;

	if (!(str = ft_strjoin(s1, s2)))
	{
		free_ptr(&s1, &s2, tofree);
		return (NULL);
	}
	free_ptr(&s1, &s2, tofree);
	return (str);
}
