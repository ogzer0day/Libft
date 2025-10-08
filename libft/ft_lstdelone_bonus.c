#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

void	del(void *node)
{
	free(node);
}

void	print_nodes(t_list *nodes)
{
	while (nodes)
	{
		printf("%d\n", *(int *)nodes->content);
		nodes = nodes->next;
	}
}

int	main(void)
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	t_list *secand = (t_list *)malloc(sizeof(t_list));
	t_list *third = (t_list *)malloc(sizeof(t_list));

	int *a = malloc(sizeof(int));
	int *b = malloc(sizeof(int));
	int *c = malloc(sizeof(int));

	*a = 5;
	*b = 10;
	*c = 15;

	head->content = a;
	head->next = secand;

	secand->content = b;
	secand->next = third;

	third->content = c;
	third->next = NULL;

	ft_lstdelone(head, del);

	print_nodes(secand);
}