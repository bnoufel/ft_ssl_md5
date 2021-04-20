/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 07:38:56 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/14 07:39:20 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char		*ft_strpbrk(const char *s, const char *charset)
{
	size_t	i;
	size_t	len;
	char	*ret;

	i = 0;
	len = ft_strlen(charset);
	while (i < len)
	{
		if ((ret = ft_strchr(s, charset[i])))
			return (ret);
		i++;
	}
	return (NULL);
}
