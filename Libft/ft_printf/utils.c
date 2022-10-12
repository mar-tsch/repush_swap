/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:11:26 by mtritsch          #+#    #+#             */
/*   Updated: 2022/07/07 16:28:08 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft.h"

int	print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

void	putstr(char *s)
{
	int	x;

	x = 0;
	while (s[x])
	{
		write(1, &s[x], 1);
		x++;
	}
}

int	print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

int	print_s(char *s)
{
	int	x;

	x = 0;
	if (s == NULL)
	{
		putstr("(null)");
		return (6);
	}
	while (s[x])
	{
		write(1, &s[x], 1);
		x++;
	}
	return (x);
}

int	print_nb(int n)
{
	int		len;
	char	*nb;

	len = 0;
	nb = ft_itoa(n);
	len = print_s(nb);
	free(nb);
	return (len);
}
