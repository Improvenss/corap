#ifndef PUSH_SWAP
# define PUSH_SWAP

# define B_CYAN		"\033[1;36m"
# define B_BLUE		"\033[1;34m"
# define B_YELLOW	"\033[1;33m"
# define B_GREEN	"\033[1;32m"
# define B_RED		"\033[1;31m"
# define B_RESET	"\033[1m"


# include "libft/libft.h"
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_base
{
	int	*a;
	int	*b;
	int	size_a; // kac tane sayimiz var 
	int	size_b; // kac tane sayimiz var 
	int	small; // sayilarimiz arasindaki en kucuk sayi
	int	middle; // ortanca sayi
	int	large; // en buyuk sayi
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
void	sort_seperate(t_base *base);
// -------- Get -------------------------------
int	get_stack_size(int *stack);

// -------- Find ------------------------------
int	find_sml(t_base *base);

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