/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_remove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:36:42 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/01 16:13:51 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *curr;

	while (*begin_list)
	{
		curr = begin_list->next;
		if (cp(curr->data, data_ref) == 0)
		{
			begin_list = begin_list->next->next;
			free (curr);

		}
		begin_list->next;
		
	}
}
