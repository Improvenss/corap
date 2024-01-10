#include "push_swap.h"

void	sort_bubble(int *stack, int size)
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
			if (stack[i] > stack[j])
			{
				tmp = stack[i];
				stack[i] = stack[j];
				stack[j] = tmp;
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
	sort_bubble(tmp, size);
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
		if (stack[i] < small)
			small = stack[i];
	return (small);
}

int	find_large(int *stack, int size)
{
	int	i;
	int	large;

	large = 0;
	i = -1;
	while (++i < size)
		if (stack[i] > large)
			large = stack[i];
	return (large);
}
