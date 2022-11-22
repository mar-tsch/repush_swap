/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_chonk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:53:29 by mtritsch          #+#    #+#             */
/*   Updated: 2022/11/22 15:10:59 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	start_sorting(t_list **stack_a, t_list **stack_b, t_carac *carac)
{
	while ((*stack_a)->next->next->next)
	{
		if ((*stack_a)->content == carac->min
			|| (*stack_a)->content == carac->max)
			rotate(*stack_a, RA);
		else if ((*stack_a)->content < carac->lomid && carac->pos_lomid > 0)
		{
			rotate(*stack_a, RA);
			carac->pos_lomid--;
		}
		else if ((*stack_a)->content < carac->himid)
			stack_push(stack_b, stack_a, PB);
		else if ((*stack_a)->content > carac->himid)
		{
			stack_push(stack_b, stack_a, PB);
			rotate(*stack_b, RB);
		}
		else
			stack_push(stack_b, stack_a, PB);
	}
	three_num(*stack_a);
}

void	best_possible_move(t_list **stack_a, t_list **stack_b)
{
	t_list		*tmp_a;
	t_list		*tmp_b;
	int			best_move;

	best_move = 2147483647;
	tmp_b = *stack_b;
	(*stack_b)->pos = 0;
	while (tmp_b)
	{
		(*stack_a)->pos = 0;
		tmp_a = *stack_a;
		best_stack_a(stack_a, &tmp_a, &tmp_b);
		if (tmp_a->next && ok_stack_a(tmp_a, tmp_b))
			(*stack_a)->pos++;
		if (be_positive((*stack_a)->pos)
			+ be_positive((*stack_b)->pos) < be_positive(best_move))
			best_one(stack_a, stack_b, &best_move);
		if ((*stack_b)->pos == ft_lstsize(*stack_b) / 2)
			(*stack_b)->pos = (ft_lstsize(*stack_b) - (*stack_b)->pos) * -1;
		(*stack_b)->pos++;
		tmp_b = tmp_b->next;
	}
	place_deez(stack_a, stack_b);
}

void	slide_in_place(t_list **stack_a, t_list **stack_b, t_carac *carac)
{
	t_list		*tmp;
	static int	min_place = 0;
	static int	mid_place = 0;

	tmp = *stack_a;
	while (tmp->content != carac->min)
	{
		min_place++;
		tmp = tmp->next;
	}
	tmp = *stack_a;
	while (tmp->content != carac->mid)
	{
		mid_place++;
		tmp = tmp->next;
	}
	while (!stack_is_sorted(*stack_a, *stack_b))
	{
		if (min_place < mid_place)
			rotate(*stack_a, RA);
		else
			reverse_rotate(*stack_a, RRA);
	}
}

void	algo_chonk(t_list **stack_a, t_list **stack_b, t_carac *carac)
{
	t_list	*last_one;

	last_one = ft_lstlast(*stack_a);
	start_sorting(stack_a, stack_b, carac);
	while (*stack_b && !stack_is_sorted(*stack_a, *stack_b))
	{
		last_one = ft_lstlast(*stack_a);
		if (ok_general(stack_a, stack_b, last_one))
			stack_push(stack_a, stack_b, PA);
		else
			best_possible_move(stack_a, stack_b);
	}
	slide_in_place(stack_a, stack_b, carac);
}
