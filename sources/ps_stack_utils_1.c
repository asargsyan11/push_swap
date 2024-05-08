/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_utils_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:24:21 by asargsya          #+#    #+#             */
/*   Updated: 2024/04/22 16:27:43 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//create a new node
t_stack *new_node(int data)
{
    t_stack *newNode;

    newNode = (t_stack *)malloc(t_stack)
    if (!newNode)
        error_exit();
    newNode->data = data;
    newNode->next = NULL;
    return (newNode);
}

//function to get the last element
t_stack *last_node(t_stack **stack)
{
    t_stack *last;
    if (*stack == NULL)
        return (0);
    last = *stack;
    while(last->next)
        last = last->next;
    return (last);
}

//function to add a node at the end of the list
t_stack *add_end(t_stack **stack, int data)
{
    t_stack *new;
    t_stack *last;
    
    new = new_node(data);
    last = last_node(stack);
    if (!stack || *stack == NULL)
        return (0);
    last->next = new;
    return (stack);
}
