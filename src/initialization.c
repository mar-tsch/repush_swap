/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:49:25 by mtritsch          #+#    #+#             */
/*   Updated: 2022/09/21 18:26:19 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    order_stack(t_stack *stack)
{
    t_stack *tmp1;
    t_stack *tmp2;
    int     len;
    int     less;

    //len = length of stack;
    tmp1 = stack;
    while (tmp1 != NULL)
    {
        tmp2 = stack;
        less = 0;
        while (tmp2 != NULL)
        {
            if (tmp1->content < tmp2->content)
                less++;
            tmp2 = tmp2->next;
        }
        tmp1->pos = len - less;
        tmp1 = tmp1->next; 
    }
}

void    add_to_stack(t_stack **stack, t_stack *new) //ft_lstadd_back ?
{
    //stuff
}

void    free_stack(t_stack *stack)
{
    if (stack)
    {
        if (stack->next != NULL)
            free_stack(stack->next);
        free(stack);
    }
}

t_stack *new_stack(int content)
{
    t_stack *result;

    result = ft_calloc(1, sizeof(t_stack));
    if (result == NULL)
        return (NULL);
    result->next = NULL;
    result->pos = 0;
    result->content = content;
    return (result);
}

t_stack *build_stack(char **args)
{
    t_stack *result;
    t_stack *tmp;

    result = NULL;
    while (*args != NULL)
    {
        tmp = new_stack(ft_atoi(*args));
        if (tmp == NULL)
        {
            free_stack(result);
            return (NULL);
        }
        ft_lstadd_back(&result, tmp);
        args++;
    }
    order_stack(result);
    return (result);
}
