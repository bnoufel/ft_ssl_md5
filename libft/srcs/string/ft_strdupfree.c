#include "str.h"

static void		free_ptr(char **ptr)
{
	ft_strdel(ptr);
}

char			*ft_strdupfree(char *str, char **ptr_to_free)
{
	char		*new;

	if (!(new = ft_strdup(str)))
	{
		free_ptr(ptr_to_free);
		return (NULL);
	}
	free_ptr(ptr_to_free);
	return (new);
}
