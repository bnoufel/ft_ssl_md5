/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabtostr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:03:21 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tab.h"

/*
**	Transform an array into a string with a space in separation.
************************* RETURN VALUES **********************************
**	The ft_tabtostr function returns the new string set to zero or NULL
**	if allocate fail.
*/

char		*ft_tabtostr(char **tab)
{
	return (ft_tabtostr_c(tab, ' '));
}
