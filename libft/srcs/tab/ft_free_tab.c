#include "str.h"
#include "tab.h"
#include <stdlib.h>

void			ft_free_tab(char **tab)
{
	size_t		i;
	size_t		n;

	i = 0;
	n = ft_tablen(tab);
	while (i < n)
	{
		ft_strdel(&tab[i]);
		i++;
	}
	free(tab);
	tab = NULL;
}
