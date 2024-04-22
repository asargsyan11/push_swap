/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:25:00 by asargsya          #+#    #+#             */
/*   Updated: 2024/04/17 15:17:19 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}	t_stack;

//validation
int		is_valid(char *arguments);
int		is_double(char **arguments);
int		error_exit(void);

//utilities
int		is_digit(char ch);
int		ft_atoi(const char *str);
char	**ft_split(const char *str, char ch);
int		ft_stacksize(t_stack **stack);
//operations

#endif
