/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:57:57 by asargsya          #+#    #+#             */
/*   Updated: 2024/04/16 13:31:51 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_valid(char **arguments)
{
	int	index_r;
	int	index_c;

	index_r = 1;
	index_c = 0;
	
	while (arguments[index_r])
	{
		while (arguments[index_r][index_c])
		{
			if (arguments[index_r][index_c] == '-')
				index_c++;
			if (!ft_isdigit(arguments[index_r][index_c]))
			   error_exit();
			else
				index_c++;	
		}
		index_r++;
	}
	return (0);
}	

int is_double(char **arguments)
{
	int index_r;
	int	index_r2;
	int	num1;
	int	num2;

	index_r = 1;
	index_r2 = 2;
	num1 = 0;
	num2 = 0;
	while (arguments[index_r])
	{
		num1 = ft_atoi(arguments[index_r]);
	  	while(arguments[index_r2])
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