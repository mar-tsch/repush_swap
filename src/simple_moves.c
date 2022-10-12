/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:14:21 by mtritsch          #+#    #+#             */
/*   Updated: 2022/10/12 18:23:17 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	stack_swap(t_list *stack, int mv)
{
	t_list	*elem;
	t_list	*elem1;

	elem = stack;
	elem1 = stack->next;
	swap(&elem->content, &elem1->content);
	display_move(mv);
}

void	stack_push(t_list **dst, t_list **src, int mv)
{
	t_list	*elem;

	elem = *src;
	*src = (*src)->next;
	ft_lstadd_front(dst, elem);
	display_move(mv);
}

void	rotate(t_list *stack, int mv)
{
	t_list	*elem;
	t_list	*elem1;

	elem = stack;
	elem1 = stack->next;
	while(elem1)
	{
		swap(&elem->content, &elem1->content);
		elem = elem->next;
		elem1 = elem1->next;
	}
	display_move(mv);
}

void	reverse_rotate(t_list *stack, int mv)
{
	t_list	*elem;
	t_list	*elem1;

	elem = stack;
	elem1 = stack;
	while (elem1)
	{
		swap(&elem->content, &elem1->content);
		elem1 = elem1->next;
	}
	display_move(mv);
}
