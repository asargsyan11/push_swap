'''
parse the argument
1. in case of 2 arguments
2. exactly two
3. loop over in case it is more than two??? 
'''

void args_to_stack(char **argv, t_stack **stack)
{
    int index;

    index = 0;
    while(argv[index])
    {
        add_end(stack,ft_atoi_changed(argv[index]));
        index++;
    }
}



char    *parsing(char **argv, t_stack **stack)
{
    int index;
    
    index = 0;

}