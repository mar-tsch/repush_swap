/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:42:40 by mtritsch          #+#    #+#             */
/*   Updated: 2022/11/22 15:36:28 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../includes/libft.h"

int	ptr_len(uintptr_t n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

void	ptr_put(uintptr_t n)
{
	if (n >= 16)
	{
		ptr_put(n / 16);
		ptr_put(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
			ft_putchar_fd((n - 10 + 'a'), 1);
	}
}

int	ptr_print(unsigned long long p)
{
	int	len;

	len = 0;
	if (p == 0)
	{
		len += write(1, "(nil)", 5);
		return (5);
	}
	len += write(1, "0x", 2);
	ptr_put(p);
	len += ptr_len(p);
	return (len);
}
