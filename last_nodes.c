/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_nodes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 21:57:52 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/12 23:37:25 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*last_node(t_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

t_node	*before_last_node(t_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next->next)
	{
		stack = stack->next;
	}
	return (stack);
}
