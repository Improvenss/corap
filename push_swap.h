#ifndef PUSH_SWAP
# define PUSH_SWAP

# include "libft/libft.h"
# include <stdlib.h>

typedef struct s_base
{
	int	*a;
	int	*b;
	int	size_a; // kac tane sayimiz var 
	int	size_b; // kac tane sayimiz var 
}	t_base;

void	check_repeating(t_base *base);
void	check_number(char *arg);
// -------------- Cift Tirnak -----------------
void	set_quotation_args(t_base *base, int ac, char **av);

// -------------- Argumanlar ------------------
void	set_args(t_base *base, int ac, char **av);

// ------------- Print ------------------------
void	print_stack(t_base *base);
void	print_error(char *str, int err_num);

#endif