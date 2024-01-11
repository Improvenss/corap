#include "push_swap.h"

void	sort_many(t_base *base)
{
	base->size_b = 0;
	base->b = (int *)malloc(sizeof(int) * base->size_a);
	if (!base->b)
		print_error("Error\n", 1);
	sort_seperate(base);
	free(base->b);
}
