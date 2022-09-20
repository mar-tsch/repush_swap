/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotates.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:52:22 by mtritsch          #+#    #+#             */
/*   Updated: 2022/09/20 17:24:19 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    reverse_rot(t_stack **stack)
{
    t_stack *tmp;
    
    tmp = *stack;
    while (tmp->prev)
        tmp = tmp->prev;
    tmp->prev = *stack;
    *stack = (*stack)->prev;
    (tmp->prev)->prev = NULL;
}

void	reverse_rot_a(t_stack **a)
{
    reverse_rot(a);
    write(1, "rra\n", 4);
}

void	reverse_rot_b(t_stack **b)
{
    reverse_rot(b);
    write(1, "rrb\n", 4);
}

void	reverse_rot_rot(t_stack **a, t_stack **b)
{
    reverse_rot(a);
    reverse_rot(b);
    write(1, "rrr\n", 4);
}

