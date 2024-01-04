#include "push_swap.h"

void	check_repeating(t_base *base)
{
	(void)base; // Yapilacak
	// int	i;
	// int	j;

	// i = 0;
	// j = 0;
	// while (i < base->size_a) // kontrol ettigimiz sayi teker teker.
	// {
	// 	while (j < base->size_a) // gezdigimiz sayilar.
	// 		if (base->a[i] == base->a[j])

	// }
}

void	check_quotation_args(t_base *base, int ac, char **av)
{
	(void)ac;
	char	**args;
	int		i;

	args = ft_split(av[1], ' ');
	i = -1;
	while (args[++i])
	{
		base->a[i] = *(int *)malloc(sizeof(int));
		if (base->a[i])
			print_error("Error: *(int*)malloc(): Can't allocate memory!", 1);
		base->a[i] = ft_atoi(args[i]);
		ft_printf("%s ", args[i]);
	}
	ft_printf("\n");
	base->size_a = i;
	ft_printf("A stack'imizin sayisi: %d\n", base->size_a);
}

// void	check_args(t_base *base, int ac, char **av)
// {
// }

// make && ARG='4 1 2 6 7 5 2522525 -25233'; ./push_swap $ARG

//	  av[0]             av[1]
// ./push_swap '2 51 56 3 1 9 -15 2 -2523'

//	  av[0]   av[1] av[2] av[3] av[4] av[5]
// ./push_swap 2 51 56 3 1 9 -15 2 -2523
