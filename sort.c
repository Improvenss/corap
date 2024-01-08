#include "push_swap.h"

int	sort_three(t_base *s)
{
	if (s->a[0] > s->a[1] && s->a[0] < s->a[2] && s->a[1] < s->a[2])
		sa(s, true);
	if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] > s->a[2])
	{
		sa(s, true);
		rra(s, true);
	}
	if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] < s->a[2])
		ra(s, true);
	if (s->a[0] < s->a[1] && s->a[0] < s->a[2] && s->a[1] > s->a[2])
	{
		sa(s, true);
		ra(s, true);
	}
	if (s->a[0] < s->a[1] && s->a[0] > s->a[2] && s->a[1] > s->a[2])
		rra(s, true);
	return (1);
}

void	sort_stack(t_base *base)
{
	check_sorted(base); // sirali degilse devam edecek
	// ft_printf("base->size_a: %d\n", base->size_a);
	base->size_b = 0;
	base->b = (int *)malloc(sizeof(int) * base->size_a);
	if (!base->b)
		print_error("Error: base->b (int*)malloc(): Can't allocate memory!", 1);
	// print_stack(base);
	if (base->size_a == 2)
		sa(base, true);
	else if (base->size_a == 3)
		sort_three(base);
	else
		sort_many(base);
}