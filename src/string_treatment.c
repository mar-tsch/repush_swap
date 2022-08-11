/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_treatment.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:03:29 by mtritsch          #+#    #+#             */
/*   Updated: 2022/08/05 19:31:48 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	**cust_split(char *s)
{
	int		x;
	int		len;
	char	*res;
	char	*word;

	x = 0;
	len = ft_strlen(s);
	res = malloc(sizeof(char*) * len);
	while (x < len)
	{
		if (s[x] == ' ')
			x++;
		x++;
	}
	
}
