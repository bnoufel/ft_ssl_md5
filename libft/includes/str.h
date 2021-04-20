/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:32:21 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 16:32:23 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __STR_H
# define __STR_H
# include <stddef.h>
# include <stdint.h>

char		**ft_split(const char *str, char c);
int			ft_str_is_alpha(const char *str);
int			ft_str_is_lowercase(const char *str);
int			ft_str_is_numeric(const char *str);
int			ft_str_is_printable(const char *str);
int			ft_str_is_uppercase(const char *str);
int			ft_str_is_xdigit(const char *str);
int			ft_str_is_ascii(const char *str);
int			ft_strcasecmp(const char *s1, const char *s2);
char		*ft_strcasestr(const char *haystack, const char *needle);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strchr(const char *s, int c);
void		ft_strclr(char *s);
int			ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dst, const char *src);
void		ft_strdel(char **as);
char		*ft_strdup(const char *s1);
char		*ft_strdupfree(char *str, char **ptr_to_free);
int			ft_strequ(char const *s1, char const *s2);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strjoinfree(char *s1, char *s2, short tofree);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
uint32_t	ft_strlcpy(char *dest, char *src, uint32_t size);
size_t		ft_strlen(const char *s);
size_t		ft_strlen_c(const char *str, const char c);
char		*ft_strlowcase(char *str);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(uint32_t, char));
int			ft_strncasecmp(const char *s1, const char *s2, size_t n);
char		*ft_strncat(char *s1, const char *s2, size_t n);
void		ft_strncatindex(char *buf, size_t *i, const char *str, size_t len);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_strndup(const char *s1, size_t n);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strnew(size_t size);
size_t		ft_strnlen(const char *s, size_t maxlen);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strsub(char const *s, uint32_t start, size_t len);
char		*ft_strtrim(char const *s);
char		*ft_strupcase(char *str);
char		*ft_substr(char const *s, uint32_t start, size_t n);
#endif
