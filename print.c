#include "push_swap.h"

void	print_stack(t_base *base)
{
	int	i;

	i = -1;
	while (++i < (base->size_a + base->size_b))
	{
		if (!base->a[i])
			ft_printf("%c	", ' ');
		else
			ft_printf("%d	", base->a[i]);
		if (!base->b[i])
			ft_printf("%c	\n", ' ');
		else
			ft_printf("%d\n", base->b[i]);
	}
	ft_printf("_	_\n");
	ft_printf("a	b\n");

	// ft_printf("stack(a): ");
	// while (++i < base->size_a)
	// 	ft_printf("%d ", base->a[i]);
	// ft_printf("\n");
	// ft_printf("stack(b): ");
	// while (++i < base->size_b)
	// 	ft_printf("%d ", base->b[i]);
	// ft_printf("\n");
}