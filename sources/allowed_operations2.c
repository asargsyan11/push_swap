/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allowed_operations2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:34:00 by asargsya          #+#    #+#             */
/*   Updated: 2024/04/22 15:46:15 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra_rb(t_stack **stack, int flag)
{
	t_stack	*top;
	t_stack	*second;
	t_stack	*last;

	top = *stack;
	second = top->next;
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	last->next = top;
	top->next = NULL;
	*stack = second;
	if (flag == 1)
		write(1, "ra\n", 3);
	else if (flag == 2)
		write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	ra_rb(a, 3);
	ra_rb(b, 3);
	write(1, "rr\n", 3);
}

void	rra_rrb(t_stack **stack, int flag)
{
	t_stack	*top;
	t_stack	*prev;
	t_stack	*last;

	top = *stack;
	prev = *stack;
	while (prev->next != NULL && prev->next->next != NULL)
		prev = prev->next;
	last = prev->next;
	prev->next = NULL;
	last->next = top;
	*stack = last;
	if (flag == 1)
		write(1, "rra\n", 4);
	else if (flag == 2)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rra_rrb(a, 3);
	rra_rrb(b, 3);
	write(1, "rrr\n", 4);
}
