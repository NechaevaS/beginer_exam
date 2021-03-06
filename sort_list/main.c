/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:21:46 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/01 15:31:41 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d\n", lst->data);
		lst = lst->next;
	}
}

int ascending(int a, int b)
{
	return (a <= b);
}

int main()
{
	t_list *first;
	t_list *second;
	t_list *last;
	first = NULL;
	first = (t_list*)malloc(sizeof(t_list));
	second = (t_list*)malloc(sizeof(t_list));
	last = (t_list*)malloc(sizeof(t_list));
	first->data = 14;
	first->next = second;
	second->data = 8;
	second->next = last;
	last->data = 36;
	last->next = NULL;
	print_list(first);
	print_list(sort_list(first, &ascending));
	return (0);
}
