#include "push_swap.h"

/**
 * @brief Set the quotation args object
 * 
 * 	  av[0]             av[1]
 *  ./push_swap '2 51 56 3 1 9 -15 2 -2523'
 * 
 * @param base 
 * @param ac 
 * @param av 
 */
void	set_quotation_args(t_base *base, int ac, char **av)
{
	char	**args;
	int		i;

	args = ft_split(av[1], ' ');
	if (!args)
		print_error("Error\n", 1);
	if (args[0] && args[1] == NULL)
		exit(0);
	ac = -1;
	while (args[++ac])
	base->a = (int *)malloc(sizeof(int) * ac);
	if (!base->a)
		print_error("Error\n", 1);
	i = -1;
	while (args[++i])
	{
		check_number(args[i]);
		if (if_args_mintm(args[i]))
			print_error("Error\n", 1);
		base->a[i] = ft_atoi(args[i]);
	}
	free(args);
	base->size_a = i;
}

/**
 * @brief Set the args object
 * 
 * 	  av[0]   av[1] av[2] av[3] av[4] av[5]
 *  ./push_swap 2 51 56 3 1 9 -15 2 -2523
 * 
 * @param base 
 * @param ac 
 * @param av 
 */
void	set_args(t_base *base, int ac, char **av)
{
	int	i;

	i = 0;
	base->size_a = ac - 1;
	base->a = (int *)malloc(sizeof(int) * base->size_a);
	if (!base->b)
		print_error("Error\n", 1);
	while (++i < ac)
	{
		check_number(av[i]);
		if (if_args_mintm(av[i]))
			print_error("Error\n", 1);
		base->a[i - 1] = ft_atoi(av[i]);
	}
}
