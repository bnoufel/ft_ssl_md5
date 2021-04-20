/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_no_malloc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:15:08 by bnoufel           #+#    #+#             */
/*   Updated: 2020/02/08 19:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"

/*
**	ft_lltoa_no_malloc function use a char[] in paramater and return it
**		finished by a '\0' representing the  long long n passed in parameter.
**  The negative number must be managed.
**  @param n
**  @param base
**  @return string
*/

char	*ft_lltoa_no_malloc(int64_t n, char *dst)
{
	return (ft_lltoa_base_no_malloc(n, 10, dst));
}
