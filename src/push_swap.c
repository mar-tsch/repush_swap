/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:32:27 by mtritsch          #+#    #+#             */
/*   Updated: 2022/10/13 17:26:40 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	stack_is_sorted(t_list *stack_a, t_list *stack_b)
{
	if (ft_lstsize(stack_b) != 0)
		return (0);
	while (stack_a->next)
	{
		if (stack_a->content > stack_a->next->content)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

void	stack_initialize(char **av, t_list **stack_a)
{
	int	x;
	int	elem;
	t_list	*head;

	x = 1;
	head = *stack_a;
	while (av[x])
	{
		elem = ft_atoi(av[x]);
		head = ft_lstnew(elem);
		ft_lstadd_back(stack_a, head);
		x++;
	}
}

void	select_operation(t_list **stack_a, t_list **stack_b, t_carac *carac)
{
	if (ft_lstsize(*stack_a) == 2)
		two_num(*stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		three_num(*stack_a);
	else if (ft_lstsize(*stack_a) == 5)
		five_num(stack_a, stack_b, carac);
	else
		/*more to come*/
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_carac	carac;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		exit(EXIT_FAILURE);;
	check_args(av);
	stack_intialize(av, &stack_a);
	/*more to come*/
	return (0);
}
