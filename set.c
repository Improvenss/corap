// #include "push_swap.h"

// // ./push_swap '8 2 5 3 6' -> 1 arguman ile set edilme.
// void	set_quotation_numbers(t_base *base, int ac, char **av)
// {
// 	(void)ac;
// 	char	**args;
// 	int		i;

// 	base = malloc(sizeof(t_base));
// 	if (!base)
// 		print_error("Error: malloc(): Can't allocate memory!", 1);

// 	ft_printf("%d\n", __LINE__);
// 	args = ft_split(av[1], ' ');
// 	if (!args)
// 		print_error("Error: ft_split(): Can't allocate memory!", 1);

// 	ft_printf("%d\n", __LINE__);
// 	i = -1;
// 	while (args[++i])
// 	{
// 	ft_printf("%d\n", __LINE__);
// 		base->a[i] = *(int *)malloc(sizeof(int));
// 	ft_printf("%d\n", __LINE__);
// 		// if (!base->a[i])
// 		// 	print_error("Error: *(int*)malloc(): Can't allocate memory!", 1);
// 		// check_repeating(base, base->a[i]);
// 		base->a[i] = ft_atoi(args[i]);
// 	ft_printf("%d\n", __LINE__);
// 		ft_printf("%s ", args[i]);
// 	}
// 	ft_printf("\n");
// 	base->size_a = i;
// 	ft_printf("A stack'imizin sayisi: %d\n", base->size_a);
// 	print_stack(base->a);
// }

// // // ./push_swap 8 2 5 3 6 -> Birden fazla arguman ile.
// void	set_numbers(t_base *base, int ac, char **av)
// {

// }