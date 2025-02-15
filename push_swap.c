/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 09:06:50 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/12 21:57:30 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	duplicate(t_node *stack)
{
	t_node	*node1;
	t_node	*node2;

	node1 = stack;
	while (node1)
	{
		node2 = node1->next;
		while (node2)
		{
			if (node1->value == node2->value)
				return (0);
			node2 = node2->next;
		}
		node1 = node1->next;
	}
	return (1);
}

void	free_stack(t_node **stack)
{
	t_node	*node;

	while (*stack)
	{
		node = *stack;
		*stack = (*stack)->next;
		free(node);
	}
}

int	main(int ac, char *av[])
{
	int		len;
	t_node	*stack_a;
	t_node	*stack_b;

	if (ac == 1)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	if (fill_stack_a(&stack_a, av) == 0 || duplicate(stack_a) == 0)
	{
		write(2, "Error\n", 6);
		free_stack(&stack_a);
		return (0);
	}
	len = size_of_stack(stack_a);
	if (check_sort(stack_a) == 1)
	{
		free_stack(&stack_a);
		return (0);
	}
	else
		sorting(&stack_a, &stack_b, len);
	free_stack(&stack_a);
}
