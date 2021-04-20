#include "ft_ssl.h"

static int		digest2(char *digest, t_ssl *ssl)
{
	if (!ft_strcmp(digest, "sha384"))
	{
		ssl->digest |= digest_sha384;
		ssl->exec = DEC_SHA384;
	}
	else if (!ft_strcmp(digest, "sha512"))
	{
		ssl->digest |= digest_sha512;
		ssl->exec = DEC_SHA512;
	}
	else if (!ft_strcmp(digest, "base64"))
	{
		ssl->digest |= digest_base64;
		ssl->exec = DEC_BASE64;
	}
	else
		return (help(digest, 0));
	return (1);
}

int				digest(char *digest, t_ssl *ssl)
{
	if (!ft_strcmp(digest, "md5"))
	{
		ssl->digest |= digest_md5;
		ssl->exec = DEC_MD5;
	}
	else if (!ft_strcmp(digest, "sha256"))
	{
		ssl->digest |= digest_sha256;
		ssl->exec = DEC_SHA256;
	}
	else if (!ft_strcmp(digest, "sha224"))
	{
		ssl->digest |= digest_sha224;
		ssl->exec = DEC_SHA224;
	}
	else
		return (digest2(digest, ssl));
	return (1);
}

void			check_type(t_ssl *ssl)
{
	if (ssl->digest & digest_md5 || ssl->digest & digest_sha224
		|| ssl->digest & digest_sha256
		|| ssl->digest & digest_sha384 || ssl->digest & digest_sha512)
	{
		ssl->type |= is_md5;
	}
	else if (ssl->digest & digest_base64)
		ssl->type |= is_des;
}
