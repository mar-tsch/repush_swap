/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiple_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:15:32 by mtritsch          #+#    #+#             */
/*   Updated: 2022/10/12 18:29:54 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	many_swaps(t_list **stack_a, t_list **stack_b)
{
	stack_swap(*stack_a, SS);
	stack_swap(*stack_b, 0);
}

void	many_rotates(t_list, **stack_a, t_list **stack_b)
{
	rotate(*stack_a, RR);
	rotate(*stack_b, 0);
}

void	many_rev_rotates(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(*stack_a, RRR);
	reverse_rotate(*stack_b, 0);
}
