#include "push_swap.h"

void	sort_stack(t_base *base)
{
	base->size_b = base->size_a;
	base->b = (int *)malloc(sizeof(int) * base->size_a);
	if (!base->b)
		print_error("Error: (int*)malloc(): Can't allocate memory!", 1);
	print_stack(base);
	ft_printf("\n");
	// sa(base, true);
	// sb(base, true);
	// ss(base, true);
	// ra(base, true);
	// rb(base, true);
	// rr(base, true);
	// rra(base, true);
	// rrb(base, true);
	// rrr(base, true);
	pb(base, true);
	ft_printf("\n");
	print_stack(base);
	ft_printf("\n");
	pa(base, true);
	ft_printf("\n");
	print_stack(base);
}