/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:48:07 by mtritsch          #+#    #+#             */
/*   Updated: 2022/10/13 17:03:55 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	display_move(int mvmnt)
{
	if (mvmnt == SA)
		write(1, "sa\n", 3);
	else if (mvmnt == SB)
		write(1, "sb\n", 3);
	else if (mvmnt == SS)
		write(1, "ss\n", 3);
	else if (mvmnt == PA)
		write(1, "pa\n", 3);
	else if (mvmnt == PB)
		write(1, "pb\n", 3);
	else if (mvmnt == RA)
		write(1, "ra\n", 3);
	else if (mvmnt == RB)
		write(1, "rb\n", 3);
	else if (mvmnt == RR)
		write(1, "rr\n", 3);
	else if (mvmnt == RRA)
		write(1, "rra\n", 4);
	else if (mvmnt == RRB)
		write(1, "rrb\n", 4);
	else if (mvmnt == RRR)
		write (1, "rrr\n", 4);
}

void	error_detected(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
