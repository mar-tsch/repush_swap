/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:46:37 by mtritsch          #+#    #+#             */
/*   Updated: 2022/07/11 19:23:39 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
    struct  s_stack *next;
    int             *content;
}   t_stack;


void    stack_is_sorted(t_stack **a);

// Moves functions

void    swap(t_stack **stack);
void    swap_swap(t_stack **a, t_stack **b);
void    push(t_stack **src, t_stack **dest);
void    push_a(t_stack **a, t_stack **b);
void    push_b(t_stack **a, t_stack **b);
void    rotate(t_stack **stack);
void    rotate_a(t_stack **a, t_stack **b);
void    rotate_b(t_stack **a, t_stack **b);
void    reverse_rotate(t_stack **stack);

#endif