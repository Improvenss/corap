#include "push_swap.h"

void	sort_many(t_base *base)
{
	find_sml(base); // small middle large sayiyi bul.
	sort_seperate(base);
}