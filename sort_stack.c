/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:14:29 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/13 00:41:57 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*fill_array(t_node *stack_a, int *array, int len)
{
	int	i;

	i = 0;
	while (stack_a && i < len)
	{
		array[i] = stack_a->value;
		stack_a = stack_a->next;
		i++;
	}
	return (array);
}

int	*sort_array(int *arr, int len)
{
	int	i;
	int	j;
	int	swap;

	j = 0;
	i = 0;
	while (j < len)
	{
		i = j + 1;
		while (i < len)
		{
			if (arr[j] > arr[i])
			{
				swap = arr[j];
				arr[j] = arr[i];
				arr[i] = swap;
			}
			i++;
		}
		j++;
	}
	return (arr);
}

void	indexing(t_node **stack_a, int *arr, int len)
{
	t_node	*stack;
	int		i;

	i = 0;
	while (i < len)
	{
		stack = *stack_a;
		while (stack)
		{
			if (stack->value == arr[i])
			{
				stack->index = i;
				break ;
			}
			stack = stack->next;
		}
		i++;
	}
}

void	sort_stack(t_node **stack_a, t_node **stack_b, int len)
{
	int	*array;

	array = (int *)malloc(sizeof(int) * len);
	if (!array)
		return ;
	array = fill_array(*stack_a, array, len);
	sort_array(array, len);
	indexing(stack_a, array, len);
	if (len < 250)
		push_to_b(stack_a, stack_b, 15);
	else
		push_to_b(stack_a, stack_b, 40);
	free(array);
}
