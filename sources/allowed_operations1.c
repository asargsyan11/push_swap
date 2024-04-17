/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allowed_operations1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:32:11 by asargsya          #+#    #+#             */
/*   Updated: 2024/04/17 16:08:04 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_x(t_stack **stack, int flag)
{
	t_stack	*top;
	t_stack	*second;
	t_stack	*temp_stack;

	if (*stack->next == NULL)
		return ;
	top = *stack;
	temp_stack = top;
	top->next = second->next;
	second->next = temp_stack;
	if (flag == 1)
		write(1, "sa\n", 3);
	else if (flag == 2)
		write(1, "sb\n", 3);
}

void	swap_both(t_stack **a, t_stack **b)
{
	swap_x(a, 1);
	swap_x(b, 2);
	write(1, "ss\n", 3);
}

void	push_x(t_stack **a, t_stack **b, int flag)
{
	
}

