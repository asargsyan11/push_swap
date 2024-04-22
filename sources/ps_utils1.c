/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:02:53 by asargsya          #+#    #+#             */
/*   Updated: 2024/04/22 16:22:05 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_isdigit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int	error_exit(void)
{
	write(1, "Error\n", 6);
	exit (1);
}

int	ft_stacksize(t_stack **stack)
{
	int		size;
	t_stack	*current;

	size = 0;
	current = *stack;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return (size);
}

int	ft_atoi_changed(const char *str)
{
	int		i;
	int		sign;
	long	answer;

	answer = 0;
	sign = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		answer = (answer * 10) + (str[i] - '0');
		i++;
	}
	return ((sign * answer) < 2147483647 || (sign * answer) > 	-2147483648);
}
