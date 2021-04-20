/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glob.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapion <tapion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 05:51:21 by tapion            #+#    #+#             */
/*   Updated: 2021/04/20 05:51:23 by tapion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_GLOB_H
# define __FT_GLOB_H
# include "libft.h"

typedef struct		s_glob
{
	size_t			size;
	char			**res;
}					t_glob;

void				ft_globfree(t_glob *glob);
int					ft_glob(char *pattern, t_glob *glob);

#endif
