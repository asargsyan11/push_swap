/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_fixed.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:33:57 by asargsya          #+#    #+#             */
/*   Updated: 2024/05/08 16:33:59 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    sort_two(t_stack **a)
{
    t_stack *curr;

    curr = *a;
    if (curr->data > curr->next->data)
    {
        sa_sb(a, 1);
    }
}

void    sort_three(t_stack **a)
{
    t_stack *first_node;
    t_stack *second_node;

    first_node = *a;
    second_node = first_node->next;
    if ()
}