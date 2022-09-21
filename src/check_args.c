/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:34:38 by mtritsch          #+#    #+#             */
/*   Updated: 2022/09/21 16:49:01 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	args_int_ok(char **args)
{
	int	x;
	int	y;

	x = 0;
	while (args[x])
	{
		y = 0;
		if (args[x][y] == '-' && args[x][y + 1] == '\0')
			return (0);
		if (args[x][y] == '-')
			y++;
		while (args[x][y])
		{
			if (args[x][y] < '0' && args[x][y] > '9')
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

int	args_twice(char **args)
{
	int	len;
	int	arg_len;
	int	first;
	int	scnd;

	len = 0;
	while (args[len] != NULL)
		len++;
	first = 0;
	while (first < len - 1)
	{
		scnd = first + 1;
		while (scnd < first)
		{
			arg_len = ft_strlen(args[first]);
			if (ft_strlen(args[scnd]) > arg_len)
				arg_len = ft_strlen(args[scnd]);
			if (ft_strncmp(args[first], args[scnd], arg_len) == 0)
				return (0);
			scnd++;
		}
		first++;
	}
}

int	long_atoi(char *s)
{
	int	neg;
	long long	res;

	neg = 1;
	res = 0;
	while (whitespace_finder(*s) == 1)
		s++;
	if (*s == '-')
	{
		neg *= -1;
		s++;
	}
	else if (*s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		res *= 10;
		res += (*s - '0') * neg;
		s++;
	}
	return (res);
}

int	args_size(char **args)
{
	int	x;
	long long	val;

	x = 0;
	while (args[x])
	{
		if (ft_strlen(args[x] > 11))
			return (0);
		val = long_atoi(args[x]);
		if (val < -2147483648 || val > 2147483647)
			return (0);
		x++;
	}
	return (1);
}

int	args_valid(char **args)
{
	if (args == NULL || *args == NULL)
	{
		err_putstr("Error\n");
		return (0);
	}
	if (args_int_ok(args) == 0)
	{
		err_putstr("Error\n");
		return (0);
	}
	if (args_twice(args) == 0)
	{
		err_putstr("Error\n");
		return (0);
	}
	if (args_size(args) == 0)
	{
		err_putstr("Error\n");
		return (0);
	}
	return (1);
}