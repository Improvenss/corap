#include "push_swap.h"

void	pa(t_base *base, bool print)
{
	int	tmp;
	int	i;

	if (!base->b[0])
		return ;
	tmp = base->b[0];
	i = -1;
	while (++i < base->size_b)
		base->b[i] = base->b[i + 1];
	i = base->size_b - 1;
	while (--i >= 0)
		base->a[i + 1] = base->a[i];
	base->a[0] = tmp;
	if (print)
		ft_printf("pa\n");
}

void	pb(t_base *base, bool print)
{
	int	tmp;
	int	i;

	if (!base->a[0])
		return ;
	tmp = base->a[0];
	i = -1;
	while (++i < base->size_a)
		base->a[i] = base->a[i + 1];
	i = base->size_a - 1;
	while (--i >= 0)
		base->b[i + 1] = base->b[i];
	base->b[0] = tmp;
	if (print)
		ft_printf("pb\n");
}