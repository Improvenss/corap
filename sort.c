#include "push_swap.h"

void	sort_stack(t_base *base)
{
	base->size_b = base->size_a;
	base->b = (int *)malloc(sizeof(int) * base->size_a);
	if (!base->b)
		print_error("Error: base->b (int*)malloc(): Can't allocate memory!", 1);
	print_stack(base);
	check_sorted(base);
}