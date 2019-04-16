#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *));
/*
void	print_list(t_list *lst)
{

	while (lst)
	{

		printf("%d\n", lst->data);
		lst = lst->next;
	}
}*/

void f(void *i)
{
	int *p;
	p = (int *)i;
	*p = (*p)*2;
}

int main()
{
	int a1 = 1;
	int a2 = 2;
	int a3 = 3;

	t_list *first;
	t_list *second;
	t_list *last;
	first = NULL;
	first = (t_list*)malloc(sizeof(t_list));
	second = (t_list*)malloc(sizeof(t_list));
	last = (t_list*)malloc(sizeof(t_list));
	first->data = &a1;
	first->next = second;
	second->data = &a2;
	second->next = last;
	last->data = &a3;
	last->next = NULL;
	printf("%d %d %d\n",a1, a2, a3);
	ft_list_foreach(first, f);
	printf("%d %d %d\n",a1, a2, a3);
	return (0);
}
