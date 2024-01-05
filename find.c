#include "push_swap.h"

int	find_large(int *stack, int size)
{
	int	i;
	int	large;

	large = 0;
	i = -1;
	while (++i < size)
		if (stack[i] > large) // sayimiz en kucuk sayimizdan kucukse atama yap.
			large = stack[i];
	return (large);
}

int	find_small(int *stack, int size)
{
	int	i;
	int	small;

	small = 0;
	i = -1;
	while (++i < size)
		if (stack[i] < small) // sayimiz en kucuk sayimizdan kucukse atama yap.
			small = stack[i];
	return (small);
}

// find small middle large number
int	find_sml(t_base *base)
{
	int	i;

	base->small = base->a[0]; // sadece init ettik
	base->large = base->a[0]; // sadece init ettik.
	i = -1;
	while (++i < base->size_a)
	{
		if (base->a[i] < base->small) // sayimiz en kucuk sayimizdan kucukse atama yap.
			base->small = base->a[i];
		if (base->a[i] > base->large)
			base->large = base->a[i];
	}
	base->middle = (base->large + base->middle) / 2;
	ft_printf("en kucuk: %d\n", base->small);
	ft_printf("en buyuk: %d\n", base->large);
	ft_printf("en orta: %d\n", base->middle);
	return (0);
}
