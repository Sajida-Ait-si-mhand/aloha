/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:07:30 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/12 17:14:31 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_node **stack_a, t_node **stack_b, int chank)
{
	int	i;
	int	len;

	len = size_of_stack(*stack_a);
	i = 0;
	while (i < len)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= (i + chank))
		{
			pb(stack_a, stack_b);
			i++;
		}
		else if (get_index_position(stack_a, (chank
					+ i)) < (size_of_stack(*stack_a) / 2))
			ra(stack_a);
		else
			rra(stack_a);
	}
	push_to_a(stack_a, stack_b);
}

void	push_to_a(t_node **stack_a, t_node **stack_b)
{
	int	max;
	int	max_position;

	max = ft_max(*stack_b);
	max_position = ft_max_position(*stack_b, max);
	while (size_of_stack(*stack_b) > 0)
	{
		if (max == (*stack_b)->value)
		{
			pa(stack_b, stack_a);
			if (size_of_stack(*stack_b) > 0)
			{
				max = ft_max(*stack_b);
				max_position = ft_max_position(*stack_b, max);
			}
		}
		else
		{
			if (max_position <= (size_of_stack(*stack_b) / 2))
				rb(stack_b);
			else
				rrb(stack_b);
		}
	}
}
