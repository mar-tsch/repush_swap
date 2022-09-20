/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:54:22 by mtritsch          #+#    #+#             */
/*   Updated: 2022/09/20 17:26:33 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    swap(t_stack **stack)
{
	t_stack *tmp;

	tmp = (*stack);
	(*stack) = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void	swap_a(t_stack **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	swap_b(t_stack **b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void    swap_swap(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
