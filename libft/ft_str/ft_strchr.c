/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:24:43 by mtritsch          #+#    #+#             */
/*   Updated: 2022/07/06 15:47:30 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	x;
	int	len;

	x = 0;
	len = ft_strlen(s);
	while (x <= len)
	{
		if (s[x] == (char)c)
			return ((char *)&s[x]);
		x++;
	}
	return (0);
}
