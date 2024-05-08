/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_utils_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:05:42 by asargsya          #+#    #+#             */
/*   Updated: 2024/05/08 12:05:44 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//min
int stack_min(t_stack **stack)
{
    t_stack *temp;
    int     min;

    temp = *stack;
    min = temp->data;
    temp = temp->next;
    while (temp)
    {
        if  (temp->data <= min)
            min = temp->data;
        temp = temp->next;
    }
    return (min)
}

//max
int stack_max(t_stack **stack)
{
    t_stack *temp;
    int     max;

    temp = *stack;
    max = temp->data;
    temp = temp->next;
    while (temp)
    {
        if  (temp->data <= max)
            max = temp->data;
        temp = temp->next;
    }
    return (max)
}

int check_sorted(t_stack **stack)
{
    t_stack *temp;

    temp = *stack;
    while(temp)
    {
        if (temp->data > temp->next->data)
            return (0)
        temp = temp->next;
    }
    return (1);
}