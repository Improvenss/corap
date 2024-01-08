#include "push_swap.h"

int	ft_push(t_base *stack, int len, int flag)
{
	if (flag == 0)
		pb(stack, 1);
	else
		pa(stack, 1);
	len--;
	return (len);
}

int	ft_sort_small_a(t_base *s)
{
	if (s->a[0] > s->a[1])
	{
	// ft_printf("s->b[0]: %d, s->b[1]: %d\n", s->b[0], s->b[1]);
		if (s->b[0] < s->b[1])
			ss(s, 1);
		else
			sa(s, 1);
	}
	return (1);
}

int	ft_sort_small_a2(t_base *s, int len)
{
	// print_stack(s);
	while (len != 3 || !(s->a[0] < s->a[1]
			&& s->a[1] < s->a[2]))
	{
		if (len == 3 && s->a[0] > s->a[1] && s->a[2])
		{
			// ft_printf("s->a[0]: %d, s->a[1]: %d, && s->b[0]: %d, s->b[1]: %d\n", s->a[0], s->a[1], s->b[0], s->b[1]);
			if ((s->a[0] > s->a[1]) && (s->b[0] < s->b[1]))
				ss(s, 1);
			else
				sa(s, 1);
		}
		else if (len == 3 && !(s->a[2] > s->a[0]
				&& s->a[2] > s->a[1]))
			len = ft_push(s, len, 0);
		else if (s->a[0] > s->a[1])
			sa(s, 1);
		else if (len++)
			pa(s, 1);
	}
	return (1);
}

int	ft_sort_small_b(t_base *s, int len)
{
	if (len == 2)
	{
		if (s->b[0] < s->b[1])
			sb(s, 1);
		pa(s, 1);
		pa(s, 1);
	}
	else if (len == 3)
	{
		while (len || !(s->a[0] < s->a[1] && s->a[1] < s->a[2]))
		{
			if (len == 1 && s->a[0] > s->a[1])
				sa(s, 1);
			else if (len == 1 || (len >= 2 && s->b[0] > s->b[1])
				|| (len == 3 && s->b[0] > s->b[2]))
				len = ft_push(s, len, 1);
			else
				sb(s, 1);
		}
	}
	return (1);
}
