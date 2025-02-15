/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:49:33 by saait-si          #+#    #+#             */
/*   Updated: 2024/08/12 23:37:09 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_pb(t_node **stack_a, t_node **stack_b)
{
	ra(stack_a);
	ra(stack_a);
	pb(stack_a, stack_b);
}

void	rra_pb(t_node **stack_a, t_node **stack_b)
{
	rra(stack_a);
	rra(stack_a);
	pb(stack_a, stack_b);
}
