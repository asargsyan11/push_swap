/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:25:00 by asargsya          #+#    #+#             */
/*   Updated: 2024/04/22 16:14:04 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_stack
{
	int			data;
	int			index;

	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

//validation
int		is_valid(char *arguments);
int		is_double(char **arguments);
int		error_exit(void);

//parsing
void	free_mem(char **mem);
void	args_to_stack(char **argv, t_stack **stack);
t_stack	*parse_two(char **argv);
t_stack	*parsing(int argc, char **argv);

//utilities
int		is_digit(char ch);
int		ft_atoi_changed(const char *str);
int		ft_stacksize(t_stack **stack);
char	**ft_split(const char *str, char ch);

//operations
void	sa_sb(t_stack **stack, int flag);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra_rb(t_stack **stack ,int flag);
void	rr(t_stack **a, t_stack **b);
void	rra_rrb(t_stack **stack, int flag);
void	rrr(t_stack **a, t_stack **b);

//stack utils
t_stack	*new_node(int data);
t_stack	*last_node(t_stack **stack);
t_stack *add_end(t_stack **stack, int data);
int		stack_min(t_stack **stack);
int		stack_max(t_stack **stack);
int		check_sorted(t_stack **stack);
#endif
