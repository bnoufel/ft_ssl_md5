/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:32:18 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:43:57 by tapion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRINT_H
# define __PRINT_H
# include <stddef.h>
# include <stdint.h>

void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl(const char *str);
void		ft_putendl_fd(const char *str, int fd);
void		ft_putnbr(int n);
void		ft_putnbr_fd(int n, int fd);
int			ft_puts(const char *str);
void		ft_putstr(const char *str);
void		ft_putstr_fd(const char *str, int fd);
#endif
