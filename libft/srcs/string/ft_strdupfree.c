/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupfree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapion <tapion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 05:46:18 by tapion            #+#    #+#             */
/*   Updated: 2021/04/20 05:46:19 by tapion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

static void		free_ptr(char **ptr)
{
	ft_strdel(ptr);
}

char			*ft_strdupfree(char *str, char **ptr_to_free)
{
	char		*new;

	if (!(new = ft_strdup(str)))
	{
		free_ptr(ptr_to_free);
		return (NULL);
	}
	free_ptr(ptr_to_free);
	return (new);
}
