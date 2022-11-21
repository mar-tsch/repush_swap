/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:15:19 by mtritsch          #+#    #+#             */
/*   Updated: 2022/11/21 19:26:25 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	arg_not_int(char **av)
{
	int	x;
	int	y;

	x = 1;
	while (av[x])
	{
		y = 0;
		while (av[x][y])
		{
			if ((av[x][y] < 48 || av[x][y] > 57) && av[x][y] != '-')
				error_detected();
			if (av[x][y] == '-' && (av[x][y + 1] < 48 || av[x][y + 1] > 57))
				error_detected();
			y++;
		}
		x++;
	}
}

void	arg_is_int_max(char **av)
{
	int	x;

	x = 1;
	while (av[x])
	{
		if (ft_strlen(av[x]) > 11)
			error_detected();
		if (ft_atoi(av[x]) > 2147483647 || ft_atoi(av[x]) < -2147483648)
			error_detected();
		x++;
	}
}

void	arg_twice(char **av)
{
	int	x;
	int	y;

	x = 1;
	y = x + 1;
	while (av[x])
	{
		y = x + 1;
		while (av[y])
		{
			if (ft_atoi(av[x]) == ft_atoi(av[y]))
				error_detected();
			y++;
		}
		x++;
	}
}

void	check_args(char **av)
{
	if (av[1][0] == '\0')
		error_detected();
	arg_not_int(av);
	arg_is_int_max(av);
	arg_twice(av);
}
