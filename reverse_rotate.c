/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 13:33:25 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/12 23:27:37 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_node **stack)
{
	t_node	*bottom;
	t_node	*before_bottom;
	t_node	*tmp;

	if (stack && *stack && (*stack)->next)
	{
		bottom = last_node(*stack);
		before_bottom = before_last_node(*stack);
		tmp = *stack;
		*stack = bottom;
		(*stack)->next = tmp;
		before_bottom->next = NULL;
	}
}

void	rra(t_node **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}
