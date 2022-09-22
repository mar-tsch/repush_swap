/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_solving.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:14:09 by mtritsch          #+#    #+#             */
/*   Updated: 2022/09/22 18:39:25 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	len_of_stack(t_stack *stack)
{
	size_t	res;
	t_stack	*tmp;

	res = 0;
	tmp = stack;
	while (tmp != NULL)
	{
		res++;
		tmp = tmp->next;
	}
	return (res);
}

int	stack_solved(t_stack *stack)
{
	int	first;
	t_stack	*tmp;

	first = stack->content;
	tmp = stack;
	while (tmp != NULL)
	{
		if (first >= tmp->content)
			return (0);
		first = tmp->content;
		tmp = tmp->next;	
	}
	return (1);
}

int	rotation_calcul(t_stack *stack, int pos)
{
	int	s_len;
	int	x;
	t_stack	*tmp;

	s_len = len_of_stack(stack);
	x = 0;
	tmp = stack;
	while (tmp && pos != tmp->pos)
	{
		tmp = tmp->next;
		x++;
	}
	if (tmp == NULL)
		return (-1);
	if (x <= s_len / 2)
		return (0);
	else
		return (1);
}

int	rev_rotation_calcul(t_stack *stack, int pos)
{
	int	s_len;
	int	x;
	t_stack	*tmp;

	s_len = len_of_stack(stack);
	x = 0;
	tmp = stack;
	while (tmp && pos != tmp->pos)
	{
		tmp = tmp->next;
		x++;
	}
	if (tmp == NULL)
		return (-1);
	if (x < s_len / 2)
		return (0);
	else
		return (1);
}