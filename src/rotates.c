/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:29:07 by mtritsch          #+#    #+#             */
/*   Updated: 2022/07/11 19:16:45 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    rotate(t_stack **stack)
{
    t_stack *tmp;
    
    tmp = *stack;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = *stack;
    *stack = (*stack)->next;
    (tmp->next)->next = NULL;
}

void    rotate_a(t_stack **a)
{
    rotate(a);
}

void    rotate_b(t_stack **b)
{
    rotate(b);
}

void    rotate_rotate(t_stack **a, t_stack **b)
{
    rotate(a);
    rotate(b);
}