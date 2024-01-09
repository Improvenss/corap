#include "push_swap.h"
#include <stdio.h>

/**
 * @brief 
 * 
 * NOTES: ARG='4 1 2 6 7 5'; ./push_swap $ARG | ./checkers/checker_Mac $ARG
 * 
 * ./push_swap -> Calistirildiginda sa, pa, sb, ra gibi komutlari yaziyor.
 * Ornegin;
 * pa\n
 * sa\n
 * sb\n
 * Seklinde olan bir cikti veriyor.
 * 
 * '|'(pipe) ile bu ciktilarin hepsi checker_Mac'e yonlendiriliyor.
 * 
 * checker_Mac calistirilabilir dosyasi senin sayilarina bu komutlarini
 *  yani senin ./push_swap'i calistirdigindaki ciktilarini tek tek
 *  ekleyip dogru bir sekilde siralanmis mi diye kontrol ediyor.
 * 
 * @param ac 
 * @param av 
 * @return int 
 */
int	main(int ac, char **av)
{
	t_base	base;

	if (ac < 2)
		return (0);
	if (ac == 2)
		set_quotation_args(&base, ac, av);
	else
		set_args(&base, ac, av);
	check_repeating(&base);
	sort_stack(&base);
	check_sorted(&base);
	return (0);
}
