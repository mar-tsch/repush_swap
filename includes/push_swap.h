/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:16:39 by mtritsch          #+#    #+#             */
/*   Updated: 2022/10/12 19:43:07 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

# define SA 1
# define SB 2
# define SS 3
# define PA 4
# define PB 5
# define RA 6
# define RB 7
# define RR 8
# define RRA 9
# define RRB 10
# define RRR 11
/*macro for movements*/

typedef	struct	s_carac {
		int	min;
		int	max;
		int	mid;
		int	lomid;
		int	himid;
		int	pos_lomid;
		int	idx;
}		t_carac;

		/*moves functions*/

void	swap(int *a, int *b);
void	stack_swap(t_list *stack, int mv);
void	stack_push(t_list **dst, t_list **src, int mv);
void	rotate(t_list *stack, int mv);
void	reverse_rotate(t_list *stack, int mv);
void	many_swaps(t_list **stack_a, t_list **stack_b);
void	many_rotates(t_list **stack_a, t_list **stack_b);
void	many_rev_rotates(t_list **stack_a, t_list **stack_b);

		/*displayers*/

void	display_move(int mvmnt);
void	error(void);

		/*error checkers*/

void	arg_not_int(char **av);
void	arg_is_int_max(char **av);
void	arg_twice(char **av);
void	check_args(char **av);
int		stack_is_sorted(t_list *stack_a, t_list *stack_b);

		/*little algo fuctions*/

		/*bigger algo functions*/

		/*lezgo functions*/

#endif
