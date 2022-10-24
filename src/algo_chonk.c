/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_chonk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:53:29 by mtritsch          #+#    #+#             */
/*   Updated: 2022/10/24 18:35:28 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	start_sorting(t_list **stack_a, t_list **stack_b, t_carac *carac)
{
	while ((*stack_a)->next->next->next)
	{
		if ((*stack_a)->content == carac->min || (*stack_a)->content == carac->max)
			rotate(*stack_a, RA);
		else if ((*stack_a)->content < carac->lomid && carac->pos_lomid > 0)
		{
			rotate(*stack_a, RA);
			carc->pos_lomid--;
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

