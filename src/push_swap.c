/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:32:27 by mtritsch          #+#    #+#             */
/*   Updated: 2022/10/12 19:40:26 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	stack_is_sorted(t_list *stack_a, t_list *stack_b)
{
	if (ft_lstsize(stack_b) != 0)
		return (1);
	while (stack_a->next)
	{
		if (stack_a->content > stack_a->next->content)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_carac	carac;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (NULL);
	check_args(av);
	/*more to come*/
	return (0);
}
