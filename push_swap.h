#ifndef PUSH_SWAP
# define PUSH_SWAP

# include "libft/libft.h"
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_base
{
	int	*a;
	int	*b;
	int	size_a; // kac tane sayimiz var 
	int	size_b; // kac tane sayimiz var 
}	t_base;

void	check_repeating(t_base *base);
void	check_number(char *arg);
void	check_sorted(t_base *base);
// -------------- Cift Tirnak -----------------
void	set_quotation_args(t_base *base, int ac, char **av);

// -------------- Argumanlar ------------------
void	set_args(t_base *base, int ac, char **av);

// ------------- Print ------------------------
void	print_stack(t_base *base);
void	print_error(char *str, int err_num);

// -------- Sorting ---------------------------
void	sort_stack(t_base *base);
void	sort_many(t_base *base);

// -------- Find ------------------------------
int	find_middle(t_base *base);


// --------------- Operations -----------------
// __ SWAP __
void	sa(t_base *base, bool print);
void	sb(t_base *base, bool print);
void	ss(t_base *base, bool print);
// __ PUSH __
void	pa(t_base *base, bool print);
void	pb(t_base *base, bool print);
// __ ROTATE __
void	ra(t_base *base, bool print);
void	rb(t_base *base, bool print);
void	rr(t_base *base, bool print);
// __ REVERSE ROTATE __
void	rra(t_base *base, bool print);
void	rrb(t_base *base, bool print);
void	rrr(t_base *base, bool print);

#endif