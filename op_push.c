#include "push_swap.h"

void	pa(t_base *base, bool print)
{
	int	i;

	i = base->size_a;
	while (i > 0)
	{
		base->a[i] = base->a[i - 1];
		i--;
	}
	base->a[0] = base->b[0];
	base->size_b -= 1;
	while (i < base->size_b)
	{
		base->b[i] = base->b[i + 1];
		i++;
	}
	base->size_a += 1;
	if (print)
		write(1, "pa\n", 3);

	// int	tmp;
	// int	i;

	// if (base->size_b <= 0)
	// 	return ;
	// tmp = base->b[0];
	// i = -1;
	// while (++i < base->size_b)
	// 	base->b[i] = base->b[i + 1];
	// i = base->size_b - 1;
	// while (--i >= 0)
	// 	base->a[i + 1] = base->a[i];
	// base->a[0] = tmp;
	// base->size_a++;
	// base->size_b--;
	// if (print)
	// 	ft_printf("pa\n");
}

void	pb(t_base *base, bool print)
{
	int	i;

	i = base->size_b;
	while (i > 0)
	{
		base->b[i] = base->b[i - 1];
		i--;
	}
	base->b[0] = base->a[0];
	base->size_a -= 1;
	while (i < base->size_a)
	{
		base->a[i] = base->a[i + 1];
		i++;
	}
	base->size_b += 1;
	if (print)
		write(1, "pb\n", 3);

	// int	tmp;
	// int	i;

	// if (base->size_a <= 0)
	// 	return ;
	// tmp = base->a[0];
	// i = -1;
	// while (++i < base->size_a)
	// 	base->a[i] = base->a[i + 1];
	// i = base->size_a - 1;
	// while (--i >= 0)
	// 	base->b[i + 1] = base->b[i];
	// base->b[0] = tmp;
	// base->size_a--;
	// base->size_b++;
	// if (print)
	// 	ft_printf("pb\n");
}