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
    int     index;
    int     min;
    t_stack *temp;
    
    index = 0;
    min = 0;
    temp = *stack;
    if (*stack == NULL || stack == NULL)
        error_exit();
    while(temp)
    {
        if (min >= temp->data)
            min = temp-data;
        temp = temp->next;    
    }
    temp = *stack;
    while (temp)
    {
        if(temp->data == min)
            index = temp->index;
        temp = temp->next;
    }
    return(index);
}

//max
int stack_max(t_stack **stack)
{
    int     index;
    int     max;
    t_stack *temp;
    
    index = 0;
    max = 0;
    temp = *stack;
    if (*stack == NULL || stack == NULL)
        error_exit();
    while(temp)
    {
        if (max <= temp->data)
            max = temp-data;
        temp = temp->next;    
    }
    temp = *stack;
    while (temp)
    {
        if(temp->data == max)
            index = temp->index;
        temp = temp->next;
    }
    return(index);
}

