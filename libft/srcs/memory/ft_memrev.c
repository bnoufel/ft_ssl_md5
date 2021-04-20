#include <stdlib.h>

/*
**	ft_memrev reverse n bytes from the pointer.
*/

void			*ft_memrev(void *s, size_t n)
{
	size_t		i;
	char		*tmp;
	char		c;

	tmp = s;
	i = -1;
	while (++i < --n)
	{
		c = tmp[n];
		tmp[n] = tmp[i];
		tmp[i] = c;
	}
	return (s);
}
