#include "libft.h"
#include <stdio.h>

void	print(void *str)
{
	printf("%s\n",(char *)str);
}

void *modify(void *str)
{
	int i = 0;
	char *aux = (char *)str;
	while (aux[i])
	{
		aux[i] = ft_toupper(aux[i]);
		i++;
	}
	return (aux);
}


int	main(void)
{
	t_list  *list;
	list = ft_lstnew(ft_strdup("hola"));
	ft_lstadd_front(&list,ft_lstnew(ft_strdup("Realmente")));
	ft_lstadd_back(&list,ft_lstnew(ft_strdup("Otrave")));
	printf("%s\n",(char *)list->content);
	printf("%s\n",(char *)list->next->content);
	printf("%s\n",(char *)list->next->next->content);
	printf("%d\n",ft_lstsize(list));
	t_list	*last;
	last = ft_lstlast(list);
	printf("%s\n",(char *)last->content);
	ft_lstiter(list, print);

	t_list *new;
	new = ft_lstmap(list, modify, free);
	ft_lstiter(new, print);

	ft_lstclear(&new, free);
	


}