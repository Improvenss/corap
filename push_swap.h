#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_base
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
	int	small;
	int	large;
}	t_base;

void	check_repeating(t_base *base);
void	check_number(char *arg);
int		is_sorted(int *stack_a, int size, int flag);
void	check_sorted(t_base *base);
bool	if_args_mintm(const char *argv);
int		ft_isspace(char chr);

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
int		sort_three(t_base *s);
int		quicksort_a(t_base *stack, int len, int count);
int		quicksort_b(t_base *stack, int len, int count);
int		ft_push(t_base *stack, int len, int flag);
int		sort_small_a(t_base *s);
int		sort_small_a2(t_base *s, int len);
int		sort_small_b(t_base *s, int len);

// -------- Get -------------------------------
int		get_stack_size(int *stack);

// -------- Find ------------------------------
void	sort_bubble(int *tmp_stack, int size);
void	find_middle(int *pivot, int *stack, int size);
int		find_small(int *stack, int size);
int		find_large(int *stack, int size);

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