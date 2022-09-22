/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solving_two_to_five.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:41:51 by mtritsch          #+#    #+#             */
/*   Updated: 2022/09/22 19:06:19 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	solve_two(t_stack **stack)
{
	if (stack_solved(*stack) == 0)
		swap_a(stack);
	return (1);
}

int	solve_three(t_stack **stack)
{
	int	res;
	int	elem1;
	int	elem2;
	int	elem3;
		
	res = 0;
	while (stack_solved(*stack) == 0)
	{
		elem1 = (*stack)->content;
		elem2 = (*stack)->next->content;
		elem3 = (*stack)->next->next->content;
		if (elem1 > elem2 && elem2 < elem3 && elem1 > elem3 && res++ > -1)
 			rotate_a(stack);
		else if (elem1 < elem2 && elem2 > elem3 && elem1 > elem3)
		{
			reverse_rot_a(stack);
			res++;
		}
		else
		{
			swap_a(stack);
			res++;
		}
	}
	return (res);
}

void	keep_going(t_stack **a, t_stack **b)
{
	/* stuff that need more utils */
}

int	solve_five(t_stack **stack)
{
	int res;

	res = 0;
	while (/*smthng*/)
	{
		//stuff
	}
	return (res);
}