#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}

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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	head = NULL;
	temp = lst;
	while (temp)
	{
		new_node = (t_list *)malloc(sizeof(t_list));
		if (!new_node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new_node->content = f(temp->content);
		if (!new_node->content)
		{
			free(new_node);
			ft_lstclear(&head, del);
			return (NULL);
		}
		new_node->next = NULL;
		ft_lstadd_back(&head, new_node);
		temp = temp->next;
	}
	return (head);
}
