/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allowed_operations1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:32:11 by asargsya          #+#    #+#             */
/*   Updated: 2024/04/22 16:05:58 by asargsya         ###   ########.fr       */
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

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*top_a;
	t_stack	*top_b;
	t_stack	*temp;

	if (!(*b))
		return ;
	top_a = *a;
	top_b = *b;
	temp = top_b->next;
	*b = temp;
	top_b->next = top_a;
	*a = top_b;
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*top_a;
	t_stack	*top_b;
	t_stack	*temp;

	if (!(*a))
		return ;
	top_a = *a;
	top_b = *b;
	temp = top_a->next;
	*a = temp;
	top_a->next = top_b;
	*b = top_a;
	write(1, "pb\n", 3);
}
