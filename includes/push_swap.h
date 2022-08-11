/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:46:37 by mtritsch          #+#    #+#             */
/*   Updated: 2022/08/05 16:26:30 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../libft/ft_print/ft_printf.h"

typedef struct s_stack
{
    struct	s_stack *next;
    struct	s-stack	*prev;
    int		*content;
    int		*pos;
}   t_stack;


void    stack_is_sorted(t_stack **a);

/* Moves functions */

void    swap(t_stack **stack);
void    swap_swap(t_stack **a, t_stack **b);
void    push(t_stack **src, t_stack **dest);
void    push_a(t_stack **a, t_stack **b);
void    push_b(t_stack **a, t_stack **b);
void    rotate(t_stack **stack);
void    rotate_a(t_stack **a, t_stack **b);
void    rotate_b(t_stack **a, t_stack **b);
void    reverse_rotate(t_stack **stack);

/* Displayers */

void	putchar(char c);
void	putstr(char *s);
void	err_putchar(char c);
void	err_putstr(char *s);
void	print_stack(t_stack **stack);

/* String treatment */

char	**cust_split(char *s);

/* Check args */

int	args_it_ok(char **args);
int	args_twice(char **args);
int	args_maxint(char **args);
int	args_valid(char **args);

/* base */

t_stack	build_stack(char **args);
t_stack	new_stack(int content);
void	add_to_stack(t_stack **stack, t_stack *new);
void	order_stack(t_stack *stack);
void	free_stack(t_stack *stack);

/* ? */

#endif
