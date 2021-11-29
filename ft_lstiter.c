#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return ;
	while (lst)
	{
		if (f)
			f(lst->content);
		lst = lst->next;
	}
}
