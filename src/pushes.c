/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:21:40 by mtritsch          #+#    #+#             */
/*   Updated: 2022/09/20 17:13:55 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_stack **src, t_stack **dest)
{
	t_stack	*tmp;

	tmp = *dest;
	*dest = *src;
	*src = (*src)->next;
	(*dest)->next = tmp;
}

void	push_a(t_stack **a, t_stack **b)
{
	push(a, b);
	write(1, "pa\n", 3);
}

void   push_b(t_stack **a, t_stack **b)
{
	push(b, a);
	write(1, "pb\n", 3);
}