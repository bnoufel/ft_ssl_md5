/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md5.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 05:49:37 by bnoufel           #+#    #+#             */
/*   Updated: 2021/04/20 05:49:38 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MD5_H
# define __MD5_H
# define NO_SUCH_FILE "No such file or directory"

typedef struct			s_md5
{
	size_t				msg_len;
	char				*msg;
	char				*hash;
	char				*msg_hash;
	char				*file_hash;
	uint32_t			a;
	uint32_t			b;
	uint32_t			c;
	uint32_t			d;
	uint32_t			e;
	uint32_t			f;
	uint32_t			g;
	uint32_t			swap;
	uint32_t			*w;
	uint32_t			h0;
	uint32_t			h1;
	uint32_t			h2;
	uint32_t			h3;
	uint32_t			h4;
}						t_md5;

#endif
