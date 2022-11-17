/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:16:39 by mtritsch          #+#    #+#             */
/*   Updated: 2022/11/17 14:31:13 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

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

typedef struct s_carac {
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

		/*caracs defining functions*/

void	is_min_or_max(t_list **stack_a, t_carac *carac);
void	build_tab(t_list **stack_a, int *tab, int size);
void	find_mid_and_co(int *tab, int size, t_carac *carac);
void	set_caracs(t_list **stack_a, t_carac *carac);

		/*stack organization*/

void	stacks_up(t_list **stack_a, t_list **stack_b);
void	stacks_down(t_list **stack_a, t_list **stack_b);
void	one_up(t_list **stack, char c);
void	one_down(t_list **stack, char c);
void	place_deez(t_list **stack_a, t_list **stack_b);

		/*smol algo fuctions*/

void	two_num(t_list *stack_a);
void	three_num(t_list *stack_a);
void	three_num_bwrds(t_list *stack_b);
void	five_num(t_list **stack_a, t_list **stack_b, t_carac *carac);

		/*chonky algo functions*/

void	start_sorting(t_list **stack_a, t_list **stack_b, t_carac *carac);
void	best_possible_move(t_list **stack_a, t_list **stack_b);
void	slide_in_place(t_list **stack_a, t_list **stack_b, t_carac *carac);
void	algo_chonk(t_list **stack_a, t_list **stack_b, t_carac *carac);

		/*utils mostly for chonky algo*/

int		be_positive(int x);
int		ok_stack_a(t_list *tmp_a, t_list *tmp_b);
int		ok_general(t_list **stack_a, t_list **stack_b, t_list *last);
void	best_stack_a(t_list **stack_a, t_list **tmp_a, t_list **tmp_b);
void	best_one(t_list **stack_a, t_list **stack_b, int *best);

		/*lezgo functions*/

void	stack_initialize(char **av, t_list **stack_a);
void	select_operation(t_list **stack_a, t_list **stack_b, t_carac *carac);

#endif
