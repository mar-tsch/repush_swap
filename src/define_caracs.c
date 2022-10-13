/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_caracs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:31:13 by mtritsch          #+#    #+#             */
/*   Updated: 2022/10/13 18:11:00 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	is_min_or_max(t_list **stack_a, t_carac *carac)
{
	int	min;
	int	max;
	t_list	*tmp;

	tmp = *stack_a;
	min = (*stack_a)->content;
	max = (*stack_a)->content;
	while (tmp)
	{
		if (tmp->content < min)
			min = tmp->content;
		if (tmp->content > max)
			max = tmp->content;
		tmp = tmp->next;
	}
	carac->min = min;
	carac->max = max;
}

void	build_tab(t_list **stack_a, int *tab, int size)
{
	int	x;
	t_list	*tmp;

	x = 0;
	tmp = *stack_a;
	while (x < size)
	{
		tab[x] = tmp->content;
		x++;
		tmp = tmp->next;
	}
}

void	find_mid_and_co(int *tab, int size, t_carac *carac)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] < tab[b])
				ft_swap(&tab[a], &tab[b]);
			b++;
		}
		a++;
	}
	c = a / 3;
	d = c * 2;
	a = a / 2;
	carac->pos_lomid = c;
	carac->mid = tab[a];
	carac->lomid = tab[d];
	carac->himid = tab[c];
}

void	set_caracs(t_list **stack_a, t_carac *carac)
{
	int	*tab;
	int	x;
	int	size;
	t_list	*tmp;

	x = 0;
	tmp = *stack_a;
	size = ft_lstsize(*stack_a);
	tab = malloc(sizeof(*tab) * size);
	if (!tab)
		exit(EXIT_FAILURE);
	while (x < size)
	{
		tab[x] = tmp->content;
		x++;
		tmp = tmp->next;
	}
	is_min_ormax(stack_a, carac);
	build_tab(stack_a, tab, size);
	find_mid_and_co(tab, size, carac);
	free(tab);
}
