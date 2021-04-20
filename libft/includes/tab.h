/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:32:23 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:43:57 by tapion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __TAB_H
# define __TAB_H
# include <stddef.h>
# include <stdint.h>

char			**ft_tabdup(char **s);
size_t			ft_tablen(char **s);
char			**ft_tabndup(char **s, size_t n);
char			**ft_tabnew(size_t size);
char			*ft_tabtostr(char **tab);
char			*ft_tabtostr_c(char **tab, const char c);
void			ft_free_tab(char **tab);
#endif
