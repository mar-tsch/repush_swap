/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:20:40 by mtritsch          #+#    #+#             */
/*   Updated: 2022/11/17 14:28:56 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*us1;
	unsigned char	*us2;
	size_t			x;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	x = 0;
	while (us1[x] != '\0' && us1[x] == us2[x] && n - 1 > 0)
	{
		x++;
		n--;
	}
	if (n == 0)
		return (0);
	return (us1[x] - us2[x]);
}
