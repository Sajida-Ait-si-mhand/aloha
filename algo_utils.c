/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:13:56 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/12 23:38:04 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index_position(t_node **stack_a, int total)
{
	int		i;
	t_node	*stack;

	stack = *stack_a;
	i = 0;
	while (i < size_of_stack(*stack_a))
	{
		if (stack->index < total)
			break ;
		stack = stack->next;
		i++;
	}
	return (i);
}

int	ft_max(t_node *stack)
{
	t_node	*node;
	int		max;

	node = stack;
	if (!node)
		return (0);
	max = node->value;
	while (node)
	{
		if (node->next != NULL && max < node->next->value)
		{
			max = node->next->value;
		}
		node = node->next;
	}
	return (max);
}

int	ft_max_position(t_node *stack, int c)
{
	t_node	*node;
	int		i;

	i = 0;
	node = stack;
	if (!stack)
		return (0);
	while (node)
	{
		if (node->value == c)
			break ;
		node = node->next;
		i++;
	}
	return (i);
}
