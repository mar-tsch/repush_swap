/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:28:48 by mtritsch          #+#    #+#             */
/*   Updated: 2022/11/22 15:36:28 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	x;

	x = ft_strlen(s);
	while (s[x] >= 0)
	{
		if (s[x] == (char)c)
			return ((char *)&s[x]);
		if (x == 0)
			break ;
		x--;
	}
	return (0);
}
