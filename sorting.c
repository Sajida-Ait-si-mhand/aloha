/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 01:34:33 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/12 16:49:31 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_node **stack)
{
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
	else
		return ;
}

void	sort_3(t_node **stack)
{
	if ((*stack)->value == max(*stack))
		ra(stack);
	else if ((*stack)->next->value == max(*stack))
		rra(stack);
	sort_2(stack);
}

void	sort_4(t_node **stack_a, t_node **stack_b)
{
	if ((*stack_a)->value == min(*stack_a))
		pb(stack_a, stack_b);
	else if ((*stack_a)->next->value == min(*stack_a))
	{
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->value == min(*stack_a))
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->next->value == min(*stack_a))
	{
		rra(stack_a);
		if (check_sort(*stack_a))
			return ;
		pb(stack_a, stack_b);
	}
	sort_3(stack_a);
	pa(stack_b, stack_a);
}

void	sort_5(t_node **stack_a, t_node **stack_b)
{
	if ((*stack_a)->value == min(*stack_a))
		pb(stack_a, stack_b);
	else if ((*stack_a)->next->value == min(*stack_a))
	{
		sa(stack_a);
		pb(stack_a, stack_a);
	}
	else if ((*stack_a)->next->next->value == min(*stack_a))
		ra_pb(stack_a, stack_b);
	else if ((*stack_a)->next->next->next->value == min(*stack_a))
		rra_pb(stack_a, stack_b);
	else if ((*stack_a)->next->next->next->next->value == min(*stack_a))
	{
		rra(stack_a);
		if (check_sort(*stack_a))
			return ;
		pb(stack_a, stack_b);
	}
	sort_4(stack_a, stack_b);
	pa(stack_b, stack_a);
}

void	sorting(t_node **stack_a, t_node **stack_b, int len)
{
	if (len == 2)
		sort_2(stack_a);
	else if (len == 3)
		sort_3(stack_a);
	else if (len == 4)
		sort_4(stack_a, stack_b);
	else if (len == 5)
		sort_5(stack_a, stack_b);
	else
		sort_stack(stack_a, stack_b, len);
}
