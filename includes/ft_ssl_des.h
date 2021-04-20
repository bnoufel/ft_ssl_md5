/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssl_des.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnoufel <bnoufel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 05:49:30 by bnoufel           #+#    #+#             */
/*   Updated: 2021/04/20 05:49:32 by bnoufel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_SSL_DES_H
# define __FT_SSL_DES_H
# define NO_SUCH_FILE "No such file or directory"
# include "libft.h"
# include <unistd.h>
# define HEX "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"

typedef struct			s_ssl_des
{
	short				args;
	short				type;
	int					input_file_fd;
	int					output_file_fd;
	int					break_hash;
}						t_ssl_des;

/*
** Flag ft_ssl_des
** -a : decode/encode the input/output in base64, depending on the encrypt mode
** -d : decrypt mode
** -e : encrypt mode (default)
** -i : input file for message
** -k : key in hex is the next arguement.
** (Behave like openssl des -K not openssl des -k)
** -o : output file for message
** -p : password in ascii is the next argument.
** (Behave like a modifiedd openssl des -pass not like openssl des -p or -P)
** (A verbose explanation is given in the next section)
** -s : the salt in hex is the next argument.
** (Behave like openssl des -S)
** -v : initialization vector in hex is the next argument.
** (Behave like openssl des -iv not openssl des -v)
*/

typedef enum			e_args_des
{
	FLAG_DES_a = 1 << 0,
	FLAG_DES_d = 1 << 1,
	FLAG_DES_e = 1 << 2,
	FLAG_DES_i = 1 << 3,
	FLAG_DES_b = 1 << 9,
}						t_args_des;

int						help_des(char *arg, int ret);
char					*base64(t_ssl_des *des, char *hex);
void					print_base64(t_ssl_des *des, char *base64);
void					set_fds(t_ssl_des *des);
void					reset_and_close_fds(t_ssl_des *des);
int						open_error(char *file, int ret);
#endif
