#include "push_swap.h"

void	print_error(char *str, int err_num)
{
	ft_putstr_fd(str, 2);
	if (err_num != 0)
		exit(err_num);
}
