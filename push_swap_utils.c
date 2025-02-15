/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 22:42:48 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/12 23:37:48 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(t_node *stack_a)
{
	t_node	*head;

	head = stack_a;
	while (head != NULL && head->next != NULL)
	{
		if ((head->value) > (head->next)->value)
			return (0);
		head = head->next;
	}
	return (1);
}

int	size_of_stack(t_node *stack_a)
{
	int		i;
	t_node	*head;

	head = stack_a;
	i = 0;
	while (head != NULL)
	{
		head = head->next;
		i++;
	}
	return (i);
}
