/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:52:58 by mtritsch          #+#    #+#             */
/*   Updated: 2022/11/17 14:28:56 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*udst;
	unsigned char	*usrc;
	size_t			x;

	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	x = 0;
	while (x < n)
	{
		udst[x] = usrc[x];
		x++;
	}
	return (udst);
}
