/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 10:40:16 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/06 05:12:59 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_node **stack_1, t_node **stack_2)
{
	t_node	*tmp;

	if (!*stack_1)
		return ;
	tmp = (*stack_1)->next;
	(*stack_1)->next = *stack_2;
	*stack_2 = *stack_1;
	*stack_1 = tmp;
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
}

void	pa(t_node **stack_b, t_node **stack_a)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}
