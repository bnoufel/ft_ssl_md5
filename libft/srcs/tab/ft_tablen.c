/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:03:10 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
**	@param const char **s
**	The ft_tablen() function computes the length of the tab s.
**	or NULL if no such byte exists within n bytes.
************************* RETURN VALUES **********************************
**	The ft_tablen() function returns the number of index that precede the
**	terminating NULL character.
*/

size_t			ft_tablen(char **s)
{
	size_t		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
