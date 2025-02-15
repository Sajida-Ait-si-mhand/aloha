/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creation_nodes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:12:17 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/12 23:38:31 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*creation(int nbr)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = nbr;
	new_node->next = NULL;
	return (new_node);
}

void	add_node(t_node **stack_a, t_node *new_node)
{
	t_node	*node;

	node = *stack_a;
	if (*stack_a)
	{
		while (node->next != NULL)
			node = node->next;
		node->next = new_node;
	}
	else
		*stack_a = new_node;
}
