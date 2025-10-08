#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*next_node;

	if (!lst || !*lst)
		return ;
	temp = *lst;
	while (temp)
	{
		next_node = temp->next;
		del(temp->content);
		free(temp);
		temp = next_node;
	}
	*lst = NULL;
}

void	del(void *node)
{
	free(node);
}
