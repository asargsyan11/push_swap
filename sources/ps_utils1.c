/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:02:53 by asargsya          #+#    #+#             */
/*   Updated: 2024/04/16 13:31:57 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int	error_exit(void)
{
	write(1, "Error\n", 5);
	exit (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	answer;

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
	return (sign * answer);
}
