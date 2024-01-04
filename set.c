#include "push_swap.h"

void	set_quotation_args(t_base *base, int ac, char **av)
{
	(void)ac;
	char	**args;
	int		i;

	args = ft_split(av[1], ' ');
	if (!args)
		print_error("Error: ft_split(): Can't allocate memory!", 1);
	i = -1;
	while (args[++i])
	{
		check_number(args[i]);
		base->a[i] = *(int *)malloc(sizeof(int));
		if (!base->a[i])
			print_error("Error: *(int*)malloc(): Can't allocate memory!", 1);
		base->a[i] = ft_atoi(args[i]);
	}
	base->size_a = i;
}

void	set_args(t_base *base, int ac, char **av)
{
	(void)base;
	int	i;

	i = 0;
	while (++i < ac)
	{
		// ft_printf("argumanlarimiz [%d] -> [%s]\n", i, av[i]);
		check_number(av[i]);
		base->a[i - 1] = *(int *)malloc(sizeof(int));
		if (base->a[i - 1])
			print_error("Error: *(int*)malloc(): Can't allocate memory!", 1);
		base->a[i - 1] = ft_atoi(av[i]);
	}
	base->size_a = ac - 1;
}

// make && ARG='4 1 2 6 7 5 2522525 -25233'; ./push_swap $ARG

//	  av[0]             av[1]
// ./push_swap '2 51 56 3 1 9 -15 2 -2523'

//	  av[0]   av[1] av[2] av[3] av[4] av[5]
// ./push_swap 2 51 56 3 1 9 -15 2 -2523