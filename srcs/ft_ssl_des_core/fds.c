#include "ft_ssl.h"
#include "ft_ssl_des.h"

void			set_fds(t_ssl_des *des)
{
	des->input_file_fd = 0;
	des->output_file_fd = 1;
}

int				open_error(char *file, int ret)
{
	ft_printf("ft_ssl: %s: %s\n\n", file, NO_SUCH_FILE);
	return (help(NULL, ret));
}
