/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:30:48 by mtritsch          #+#    #+#             */
/*   Updated: 2022/09/21 16:42:00 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	putchar(char c)
{
	write(1, "&c", 1);
}

void	putstr(char *s)
{
	while (*s++)
		putchar(*s);
}

void	err_putchar(char c)
{
	write(2, "&c", 1);
}

void	err_putstr(char *s)
{
	while (*s++)
		err_putchar(*s);
}

void	print_stack(t_stack *stack)
{
	char	*x;

	while (stack)
	{
		x = ft_itoa(stack->pos);
		putstr(x);
		free(x);
		putstr(" | ");
		x = ft_itoa(stack->content);
		putstr(x);
		free(x);
		stack = stack->next;
	}
}
