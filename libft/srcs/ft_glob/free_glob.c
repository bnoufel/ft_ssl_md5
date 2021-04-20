/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_glob.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapion <tapion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 05:43:34 by tapion            #+#    #+#             */
/*   Updated: 2021/04/20 05:43:35 by tapion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_glob_internal.h"

void			ft_globfree(t_glob *glob)
{
	size_t		i;

	i = 0;
	while (i < glob->size)
	{
		ft_strdel(&(glob->res[i]));
		i++;
	}
	free(glob->res);
	glob->res = NULL;
	glob->size = 0;
}
