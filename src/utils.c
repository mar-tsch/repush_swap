/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:12:17 by mtritsch          #+#    #+#             */
/*   Updated: 2022/11/22 18:06:51 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	be_positive(int x)
{
	if (x < 0)
		return (x * -1);
	else
		return (x);
}

int	ok_stack_a(t_list *tmp_a, t_list *tmp_b)
{
	if (tmp_b->content > tmp_a->content
		&& tmp_b->content < tmp_a->next->content)
		return (1);
	return (0);
}

int	ok_general(t_list **stack_a, t_list **stack_b, t_list *last)
{
	if ((*stack_b)->content > last->content
		&& (*stack_b)->content < (*stack_a)->content)
		return (1);
	else
		return (0);
}

void	best_stack_a(t_list **stack_a, t_list **tmp_a, t_list **tmp_b)
{
	while ((*tmp_a)->next && !ok_stack_a(*tmp_a, *tmp_b))
	{
		if ((*stack_a)->pos == ft_lstsize(*stack_a) / 2)
			(*stack_a)->pos = (ft_lstsize(*stack_a) - (*stack_a)->pos) * -1;
		(*stack_a)->pos++;
		*tmp_a = (*tmp_a)->next;
	}
}

void	best_one(t_list **stack_a, t_list **stack_b, int *best)
{
	*best = be_positive((*stack_a)->pos) + be_positive((*stack_b)->pos);
	(*stack_b)->most_effic = (*stack_b)->pos;
	(*stack_a)->most_effic = (*stack_a)->pos;
}
