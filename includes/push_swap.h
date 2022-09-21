/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:46:37 by mtritsch          #+#    #+#             */
/*   Updated: 2022/09/21 18:26:17 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../libft/ft_printf/ft_printf.h"

typedef struct s_stack
{
    struct	s_stack *next;
    struct	s_stack	*prev;
    int		*content;
    int		*pos;
}   t_stack;


void    stack_is_sorted(t_stack **a);

/* Moves functions */

void    swap(t_stack **stack);
void    swap_a(t_stack **a);
void    swap_b(t_stack **b);
void    swap_swap(t_stack **a, t_stack **b);
void    push(t_stack **src, t_stack **dest);
void    push_a(t_stack **a, t_stack **b);
void    push_b(t_stack **a, t_stack **b);
void    rotate(t_stack **stack);
void    rotate_a(t_stack **a);
void    rotate_b(t_stack **b);
void    rotate_rotate(t_stack **a, t_stack **b);
void    reverse_rot(t_stack **stack);
void    reverse_rot_a(t_stack **a);
void    reverse_rot_b(t_stack **b);
void    reverse_rot_rot(t_stack **a, t_stack **b);

/* Displayers */

void	putchar(char c);
void	putstr(char *s);
void	err_putchar(char c);
void	err_putstr(char *s);
void	print_stack(t_stack *stack);

/* String treatment */

char	**cust_split(char *s); // just ft_split ?


/* Check args */

int	args_int_ok(char **args);
int	args_twice(char **args);
int atoi_long(char *s);
int	args_size(char **args);
int	args_valid(char **args);

/* initialization */

t_stack	*build_stack(char **args);
t_stack	*new_stack(int content);
void	add_to_stack(t_stack **stack, t_stack *new); //ft_lstadd_back ?
void	order_stack(t_stack *stack);
void	free_stack(t_stack *stack);

/* utils */
int whitespace_finder(char c);

#endif
