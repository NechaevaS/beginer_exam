/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:37:26 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/01 15:12:23 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *head;
	t_list *current;

	head = lst;
	while (lst)
	{
		current = lst->next;
		while (current)
		{
			if (cmp(lst->data, current->data) == 0)
				swap(&lst->data, &current->data);
			current = current->next;
		}
		lst = lst->next;
	}
	return(head);
}
