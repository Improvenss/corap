#include "push_swap.h"

void	print_stack(t_base *base)
{
	int	i;

	i = 0;
	while (i < base->size_a)
		ft_printf("%d ", base->a[i++]);

	// while (stack[++i])
	// 	ft_printf("%d ", stack[i]);
}