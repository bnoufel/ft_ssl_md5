/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:28:30 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:43:57 by tapion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_PRINTF_H
# define __FT_PRINTF_H
# include <stdint.h>
# include <stddef.h>
# include <stdio.h>

int		ft_asprintf(char **ret, const char *str, ...);
int		ft_dprintf(int fd, const char *str, ...);
int		ft_fprintf(FILE *stream, const char *format, ...);
int		ft_printf(const char *str, ...);
int		ft_snprintf(char *ret, size_t size, const char *str, ...);
int		ft_sprintf(char *ret, const char *str, ...);
#endif
