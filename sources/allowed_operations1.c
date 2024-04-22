/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allowed_operations1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:32:11 by asargsya          #+#    #+#             */
/*   Updated: 2024/04/22 13:40:44 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa_sb(t_stack **stack, int flag)
{
	t_stack	*top;
	t_stack	*second;
	int		temp;

	if (ft_stacksize < 2)
		return ;
	top = *stack;
	second = top->next;
	temp = top->data;
	top->data = second->data;
	second->data = temp;
	if (flag == 1)
		write(1, "sa\n", 3);
	else if (flag == 2)
		write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	sa_sb(a, 3);
	sa_sb(b, 3);
	write(1, "ss\n", 3);
}

void	pa_pb(t_stack **first, t_stack **second, int flag)
{
	t_stack	*temp;
	t_stack	*top_1;
	t_stack	*top_2;

	if (!first || !(*first))
		return ;
	top_1 = *first;
	top_2 = *second;
	temp = top_1->next;
	top_1->next = top_2;
	*first = temp;
	*second = top_1;
	if (flag == 1)
		write(1, "pb\n", 3);
	else if (flag == 2)
		write(1, "pa\n", 3);
}
