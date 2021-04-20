#include "base64.h"

static bool			init_base64(t_base64 *b, uint8_t *str, size_t n, char *hex)
{
	b->hash_size = (((4 * n / 3) + 3) & ~3);
	if (!(b->hash = ft_strnew(b->hash_size)))
		return (false);
	b->msg = str;
	b->msg_size = n;
	b->pad_count = n % 3;
	b->index = 0;
	b->h = 0;
	b->hex = hex;
	return (true);
}

static char			*finish_base64(t_base64 *base64)
{
	char			*ret;

	while (base64->pad_count < 3)
	{
		if (base64->pad_count == 0)
			break ;
		base64->hash[base64->index] = '=';
		base64->index++;
		base64->pad_count++;
	}
	if (!(ret = ft_strdup(base64->hash)))
	{
		ft_strdel(&base64->hash);
		return (NULL);
	}
	ft_strdel(&base64->hash);
	return (ret);
}

static void			process_base64(t_base64 *base64, size_t i)
{
	base64->h = ((uint32_t)base64->msg[i]) << 16;
	if ((i + 1) < base64->msg_size)
		base64->h += ((uint32_t)base64->msg[i + 1]) << 8;
	if ((i + 2) < base64->msg_size)
		base64->h += base64->msg[i + 2];
	base64->h0 = (uint8_t)(base64->h >> 18) & 63;
	base64->h1 = (uint8_t)(base64->h >> 12) & 63;
	base64->h2 = (uint8_t)(base64->h >> 6) & 63;
	base64->h3 = (uint8_t)base64->h & 63;
	base64->hash[base64->index++] = base64->hex[base64->h0];
	base64->hash[base64->index++] = base64->hex[base64->h1];
	if ((i + 1) < base64->msg_size)
		base64->hash[base64->index++] = base64->hex[base64->h2];
	if ((i + 2) < base64->msg_size)
		base64->hash[base64->index++] = base64->hex[base64->h3];
}

char				*base64_encode(char *str, size_t size, char *hex)
{
	t_base64		base64;
	size_t			i;

	i = 0;
	if (!(init_base64(&base64, (uint8_t *)str, size, hex)))
		return (NULL);
	while (i < size)
	{
		process_base64(&base64, i);
		i += 3;
	}
	return (finish_base64(&base64));
}
