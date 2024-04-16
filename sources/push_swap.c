/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:57:04 by asargsya          #+#    #+#             */
/*   Updated: 2024/04/16 13:30:53 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char **matrix;

	*matrix = NULL;
	if (argc > 1)
	{
		if (!is_valid(argv))
			printf("done");
		if (!is_double(argv))
			printf("done");	
	}
}
