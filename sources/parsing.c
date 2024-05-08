/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:55:18 by asargsya          #+#    #+#             */
/*   Updated: 2024/05/08 15:55:20 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    free_mem(char **mem)
{
    char    *ch;
    
    if(!mem)
        return ;
    while(*mem)
    {
        ch = *mem;
        mem++;
        free(ch);
    }
    mem = NULL;
}

void args_to_stack(char **argv, t_stack **stack)
{
    int index;

    index = 0;
    while(argv[index])
    {
        add_end(stack,new_node(ft_atoi_changed(argv[index])));
        index++;
    }
}

t_stack *parse_two(char **argv)
{
    t_stack *stack;
    char    **temp;

    stack = NULL;
    temp = ft_split(argv[1],' ');
    parsing(temp,&stack);
    free_mem(temp);
    free(temp);
    return (stack);
}

t_stack    *parsing(int argc, char **argv)
{
    t_stack *res_stack;
    
    res_stack = NULL;
    if (argc < 2)
        error_exit()
    else if (argc == 2)
        res_stack = parse_two(argv)
    else
    {
        args_to_stack(argv, &res_stack);
    }
    return (res_stack);
}
