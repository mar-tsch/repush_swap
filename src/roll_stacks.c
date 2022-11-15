/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   roll_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:59:05 by mtritsch          #+#    #+#             */
/*   Updated: 2022/11/15 18:28:22 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stacks_up(t_list **stack_a, t_list **stack_b)
{
	while ((*stack_b)->most_effic > 0 && (*stack_a)->most_effic > 0)
	{
		many_rotates(stack_a, stack_b);
		(*stack_b)->most_effic--;
		(*stack_a)->most_effic--;
	}
}

void	stacks_down(t_list **stack_a, t_list **stack_b)
{
	while ((*stack_b)->most_effic < 0 && (*stack_a)->most_effic < 0)
	{
		many_rev_rotates(stack_a, stack_b);
		(*stack_b)->most_effic++;
		(*stack_a)->most_effic++;
	}
}

void	one_up(t_list **stack, char c)
{
	if (c == 'a')
	{
		while ((*stack)->most_effic > 0)
		{
			rotate(*stack, RA);
			(*stack)->most_effic--;
		}
	}
	else if (c == 'b')
	{
		while ((*stack)->most_effic < 0)
		{
			rotate(*stack, RB);
			(*stack)->most_effic--;
		}
	}
}

void	one_down(t_list **stack, char c)
{
	if (c == 'a')
	{
		while ((*stack)->most_effic < 0)
		{
			reverse_rotate(*stack, RRA);
			(*stack)->most_effic++;
		}
	}
	else if (c == 'b')
	{
		while ((*stack)->most_effic < 0)
		{
			reverse_rotate(*stack, RRB);
			(*stack)->most_effic++;
		}
	}
}

void	place_deez(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a)->most_effic > 0 && (*stack_b)->most_effic > 0)
		stacks_up(stack_a, stack_b);
	else if ((*stack_a)->most_effic < 0 && (*stack_b)->most_effic < 0)
		stacks_down(stack_a, stack_b);
	if ((*stack_a)->most_effic > 0)
		one_up(stack_a, 'a');
	else if ((*stack_a)->most_effic < 0)
		one_down(stack_a, 'a');
	if ((*stack_b)->most_effic > 0)
		one_up(stack_b, 'b');
	else if ((*stack_b)->most_effic < 0)
		one_down(stack_b, 'b');
}
