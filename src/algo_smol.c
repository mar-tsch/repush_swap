/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_smol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:47:39 by mtritsch          #+#    #+#             */
/*   Updated: 2022/11/09 18:24:17 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	two_num(t_list *stack_a)
{
	stack_swap(stack_a, SA);
}

void	three_num(t_list *stack_a)
{
	if (stack_a->content < stack_a->next->content)
	{
		if (stack_a->content > stack_a->next->next->content)
			stack_swap(stack_a, SA);
		else if (stack_a->next->content > stack_a->next->next->content)
		{
			reverse_rotate(stack_a, RRA);
			stack_swap(stack_a, SA);
		}
	}
	else
	{
		if (stack_a->next->content < stack_a->next->next->content)
		{
			if (stack_a->content < stack_a->next->next->content)
				stack_swap(stack_a, SA);
			else
				rotate(stack_a, SA);
		}
		else
		{
			stack_swap(stack_a, SA);
			reverse_rotate(stack_a, RRA);
		}
	}
}

void	three_num_bwrds(t_list *stack_b)
{
	if (stack_b->content > stack_b->next->content)
	{
		if (stack_b->content < stack_b->next->next->content)
			reverse_rotate(stack_b, RRB);
		else if (stack_b->next->content < stack_b->next->next->content)
		{
			reverse_rotate(stack_b, RRB);
			stack_swap(stack_b, SB);
		}
	}
	else
	{
		if (stack_b->next->content > stack_b->next->next->content)
		{
			if (stack_b->content > stack_b->next->next->content)
				stack_swap(stack_b, SB);
			else
				rotate(stack_b, RB);
		}
		else
		{
			stack_swap(stack_b, SB);
			reverse_rotate(stack_b, RRB);
		}
	}
}

void	five_num(t_list **stack_a, t_list **stack_b, t_cararc *carac)
{
	while ((*stack_a)->next->next)
	{
		if ((*stack_a)->content == carac->min
			|| (*stack_a)->content == carac->max)
			rotate(*stack_a, RA);
		else
			stack_push(stack_b, stack_a, PB);
	}
	three_num_bwrds(*stack_b);
	if ((*stack_a)->content == carac->min)
		stack_swap(*stack_a, SA);
	while (*stack_b)
		stack_push(stack_a, stack_b, PA);
	reverse_rotate(*stack_a, RRA);
	slide_in_place(stack_a, stack_b, carac);
}
