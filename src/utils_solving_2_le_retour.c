/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_solving_2_le_retour.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:29:08 by mtritsch          #+#    #+#             */
/*   Updated: 2022/09/22 21:32:06 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
t_stack	*stack_index(t_stack *stack, int index)
{
	int	x;
	t_stack	*tmp;

	tmp = stack;
	x = 0;
	while (tmp && x < index)
	{
		tmp = tmp->next;
		x++;
	}
	return (tmp);
}

int	order_top(t_stack *stack)
{
	int	res;
	t_stack	*tmp;

	res = 0;
	tmp = stack;
	while (tmp)
	{
		if (res < tmp->pos)
			res = tmp->pos;
		tmp = tmp->next;
	}
	return (res);
}

int	order_bot(t_stack *stack)
{
	int	res;
	t_stack	*tmp;

	res = 99;
	tmp = stack;
	while (tmp)
	{
		if (res > tmp->pos)
			res = tmp->pos;
		tmp = tmp->next;
	}
	return (res);
}

int	index_top(t_stack *stack, int min, int max)
{
	t_stack	*tmp;
	int	res;

	tmp = stack;
	res = 0;
	while (tmp)
	{
		if (tmp->pos > min && tmp->pos < max)
			return (res);
		tmp = tmp->next;
		res++;
	}
	return (-1);
}

int	index_bot(t_stack *stack, int min, int max)
{
	int	x;
	t_stack	*tmp;

	x = len_of_stack(stack);
	tmp = stack_index(stack, x) - 1;
	while (tmp)
	{
		if (tmp->pos > min && tmp->pos < max)
			return (x);
		x--;
		tmp = stack_index(stack, x);
	}
	return (-1);
}