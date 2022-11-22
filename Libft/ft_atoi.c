/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:13:06 by mtritsch          #+#    #+#             */
/*   Updated: 2022/11/22 15:37:09 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long long int	ft_atoi(const char *str)
{
	long long int	total;
	int				x;
	int				sign;

	x = 0;
	sign = 1;
	total = 0;
	if (!str)
		return (0);
	while ((str[x] >= '\t' && str[x] <= '\r') || str[x] == ' ')
		x++;
	if (str[x] == '-')
	{
		sign *= -1;
		x++;
	}
	else if (str[x] == '+')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		total *= 10;
		total += (str[x] - '0');
		x++;
	}
	return (total * sign);
}
