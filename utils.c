#include "push_swap.h"
#include <limits.h>
#include <stdio.h>

bool	if_args_mintm(const char *argv)
{
	long	ret_value;
	int		i;
	int		polarity;

	i = 0;
	polarity = 1;
	while (ft_isspace(argv[i]))
		i++;
	if (argv[i] == '-' || argv[i] == '+')
	{
		if (argv[i] == '-')
			polarity *= -1;
		i++;
	}
	ret_value = 0;
	while (argv[i] >= '0' && argv[i] <= '9')
		ret_value = (ret_value * 10) + (argv[i++] - '0');
	ret_value *= polarity;
	if (ret_value > INT_MAX || ret_value < INT_MIN)
		return (true);
	else
		return (false);
}

// int	check_num_is_int_range(const char *str)
// {
// 	int	i;
// 	int	neg;
// 	int	number;

// 	i = 0;
// 	neg = 1;
// 	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
// 		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
// 		i++;
// 	if (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 			neg = -1;
// 		i++;
// 	}
// 	number = 0;
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		number = (number * 10) + (str[i] - '0');
// 		i++;
// 	}
// 	if (number * neg > INT_MAX || number * neg < INT_MIN)
// 		print_error("Error\n", 1);
// 	return (number * neg);
// }