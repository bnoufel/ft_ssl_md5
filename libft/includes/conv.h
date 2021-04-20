/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:32:07 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 16:32:09 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONV_H
# define __CONV_H
# include <stdint.h>
# include <stddef.h>
# include <sys/types.h>

/*
**	short conversion
*/

int16_t			ft_atos(const char *str);
int16_t			ft_atos_base(const char *str, int8_t base);
char			*ft_stoa(int16_t n);
char			*ft_stoa_base(int32_t n, int8_t base);
char			*ft_stoa_base_no_malloc(int16_t n, int8_t base, char *dst);
char			*ft_stoa_no_malloc(int16_t n, char *dst);

/*
**	unsigned short conversion
*/

uint16_t		ft_atous(const char *str);
uint16_t		ft_atous_base(const char *str, int8_t base);
char			*ft_ustoa(uint16_t n);
char			*ft_ustoa_base(uint16_t n, int8_t base);
char			*ft_ustoa_base_no_malloc(uint16_t n, int8_t base, char *dst);
char			*ft_ustoa_no_malloc(uint16_t n, char *dst);

/*
**	int conversion
*/

int32_t			ft_atoi(const char *str);
int32_t			ft_atoi_base(const char *str, int8_t base);
char			*ft_itoa(int32_t n);
char			*ft_itoa_base(int32_t n, int8_t base);
char			*ft_itoa_base_no_malloc(int32_t n, int8_t base, char *dst);
char			*ft_itoa_no_malloc(int32_t n, char *dst);

/*
**	unsigned int conversion
*/

uint32_t		ft_atou(const char *str);
uint32_t		ft_atou_base(const char *str, int8_t base);
char			*ft_utoa(uint32_t n);
char			*ft_utoa_base(uint32_t n, int8_t base);
char			*ft_utoa_base_no_malloc(uint32_t n, int8_t base, char *dst);
char			*ft_utoa_no_malloc(uint32_t n, char *dst);

/*
**	long conversion
*/

ssize_t			ft_atol(const char *str);
ssize_t			ft_atol_base(const char *str, int8_t base);
char			*ft_ltoa(long n);
char			*ft_ltoa_base(long n, int8_t base);
char			*ft_ltoa_base_no_malloc(long n, int8_t base, char *dst);
char			*ft_ltoa_no_malloc(long n, char *dst);

/*
**	unsigned long conversion
*/

size_t			ft_atoul(const char *str);
size_t			ft_atoul_base(const char *str, int8_t base);
char			*ft_ultoa(size_t n);
char			*ft_ultoa_base(size_t n, int8_t base);
char			*ft_ultoa_base_no_malloc(size_t n, int8_t base, char *dst);
char			*ft_ultoa_no_malloc(size_t n, char *dst);

/*
**	long long conversion
*/

int64_t			ft_llonglen_base(int64_t n, int base);

int64_t			ft_atoll(const char *str);
int64_t			ft_atoll_base(const char *str, int8_t base);
char			*ft_lltoa(int64_t n);
char			*ft_lltoa_base(int64_t n, int8_t base);
char			*ft_lltoa_base_no_malloc(int64_t n, int8_t base, char *dst);
char			*ft_lltoa_no_malloc(int64_t n, char *dst);

/*
**	unsigned long long conversion
*/

uint64_t		ft_ullonglen_base(uint64_t n, int base);

uint64_t		ft_atoull(const char *str);
uint64_t		ft_atoull_base(const char *str, int8_t base);
char			*ft_ulltoa(uint64_t n);
char			*ft_ulltoa_base(uint64_t n, int8_t base);
char			*ft_ulltoa_base_no_malloc(uint64_t n, int8_t base, char *dst);
char			*ft_ulltoa_no_malloc(uint64_t n, char *dst);
#endif
