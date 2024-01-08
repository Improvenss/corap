#include "push_swap.h"

void	ft_bubble_sort(int *tmp_stack, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tmp_stack[i] > tmp_stack[j])
			{
				tmp = tmp_stack[i];
				tmp_stack[i] = tmp_stack[j];
				tmp_stack[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	ft_get_middle(int *pivot, int *stack_a, int size)
{
	int	i;
	int	*tmp;

	tmp = (int *)malloc(sizeof(int) * size);
	if (!tmp)
		return (0);
	i = 0;
	while (i < size)
	{
		tmp[i] = stack_a[i];
		i++;
	}
	ft_bubble_sort(tmp, size);
	*pivot = tmp[size / 2];
	free(tmp);
	return (1);
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

// #include <stdlib.h>

// int	find_middle(int	*stack, int size)
// {
// 	int	middle;
// 	int	i;
// 	int	*arr;
// 	int	found;

// 	middle = (find_small(stack, size) + find_large(stack, size)) / 2;
// 	i = -1;
// 	arr = stack;
// 	found = 0;
// 	while (++i < size)
// 	{
// 		// if ((arr[i] > middle) && (arr[i] < middle))
// 		if (arr[i] == middle)
// 			return (arr[i]);
// 		else if(abs(arr[i] - middle) < abs(found - middle))
// 			found = arr[i];
// 	}
// 	ft_printf("found: %d\n", found);
// 	return (found);
// }

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
	base->middle = (base->large + base->small) / 2;
	// ft_printf("en kucuk: %d\n", base->small);
	// ft_printf("en buyuk: %d\n", base->large);
	// ft_printf("en orta: %d\n", base->middle);
	return (0);
}
