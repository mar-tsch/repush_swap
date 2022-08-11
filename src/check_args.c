/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:34:38 by mtritsch          #+#    #+#             */
/*   Updated: 2022/08/05 19:31:52 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	args_int_ok(char **args)
{
	int	x;

	x = 0;
	while (*args[x])
	{
		if (is_alpha(*args[x]) == 1)
			err_putstr("Error\n");
		x++;
	}
	return (0);
}

int	args_twice(char **args)
{
	int	x;

	x = 0;
	while (*args[x])
	{
		if ()
			err_putsr("Error\n");
		x++;
	}
}


