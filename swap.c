/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 20:14:03 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/12 23:28:21 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **stack)
{
	t_node	*head;
	t_node	*node_next;
	int		tmp;

	if (stack && *stack && (*stack)->next)
	{
		head = *stack;
		node_next = (*stack)->next;
		tmp = head->value;
		head->value = node_next->value;
		node_next->value = tmp;
	}
}

void	sa(t_node **stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_node **stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}
