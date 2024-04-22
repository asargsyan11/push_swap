/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:57:57 by asargsya          #+#    #+#             */
/*   Updated: 2024/04/22 16:14:17 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_valid(char *argv_row)
{
	int	index;

	index = 0;
	while (argv_row[index])
	{
		if (argv_row[index] == '-')
			index++;
		else if (argv_row[index] == ' ')
			index++;
		else if (!ft_isdigit(argv_row[index]))
			error_exit();
		index++;
	}
	return (0);
}

int	is_double(char **arguments)
{
	int	index_r;
	int	index_r2;
	int	num1;
	int	num2;

	index_r = 1;
	index_r2 = 1;
	num1 = 0;
	num2 = 0;
	while (arguments[index_r])
	{
		index_r2 = index_r + 1;
		num1 = ft_atoi(arguments[index_r]);
		while (arguments[index_r2])
		{
			num2 = ft_atoi(arguments[index_r2]);
			if (num1 == num2)
				error_exit();
			index_r2++;
		}
		index_r++;
	}
	return (0);
}
