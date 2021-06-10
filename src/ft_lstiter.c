#include "../libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	if (lst->next)
		ft_lstiter(lst->next, f);
	f(lst->content);
}
