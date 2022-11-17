/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:05:41 by mtritsch          #+#    #+#             */
/*   Updated: 2022/11/17 14:28:56 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	if (!content)
		list->content = 0;
	else
		list->content = content;
	list->next = NULL;
	return (list);
}
