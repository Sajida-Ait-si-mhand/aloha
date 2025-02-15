/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 04:22:25 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/06 05:10:36 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max(t_node *stack_a)
{
	t_node	*head;
	int		max;

	head = stack_a;
	max = head->value;
	while (head)
	{
		if (head->next != NULL && max < head->next->value)
			max = head->next->value;
		head = head->next;
	}
	return (max);
}

int	min(t_node *stack_a)
{
	t_node	*head;
	int		min;

	head = stack_a;
	min = head->value;
	while (head)
	{
		if (head->next != NULL && min > head->next->value)
			min = head->next->value;
		head = head->next;
	}
	return (min);
}
