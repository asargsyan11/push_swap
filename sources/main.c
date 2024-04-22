#include "../includes/push_swap.h"
#include <stdio.h>

void    sa_sb(t_stack **stack, int flag)
{
    t_stack *top;
    t_stack *second;
    int    temp;

	if (ft_stacksize(stack) < 2)
		return ;
    top = *stack;
    second = top->next;
    temp = top->data;
    top->data = second->data;
    second->data = temp;
    if (flag == 1)
   	 write(1, "sa\n", 3);
    else if (flag == 2)
   	 write(1, "sb\n", 3);
}

void    ss(t_stack **a, t_stack **b)
{
    sa_sb(a, 3);
    sa_sb(b, 3);
    write(1, "ss\n", 3);
}
/*
void    pa_pb(t_stack **first, t_stack **second, int flag)
{
    t_stack *temp;
    t_stack *top_1;
    t_stack *top_2;

	if (!first || !(*first))
		return ;
    top_1 = *second;
    top_2 = *first;
    temp = top_1->next;
    top_1->next = top_2;
    *second = temp;
    *first = top_1;
    if(flag == 1)
   	 write(1, "pa\n", 3);
    else if (flag == 2)
   	 write(1, "pb\n", 3);
}
*/

void	pa(t_stack **a, t_stack **b)
{
	t_stack *top_a;
	t_stack *top_b;
	t_stack	*temp;

	if (!(*b))
		return ;
	top_a = *a;
	top_b = *b;
	temp = top_b->next;
	*b = temp;
	top_b->next = top_a;
	*a = top_b;
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack *top_a;
	t_stack	*top_b;
	t_stack *temp;

	if (!(*a))
		return ;
	top_a = *a;
	top_b = *b;
	temp = top_a->next;
	*a = temp;
	top_a->next = top_b;
	*b = top_a;
	write(1, "pb\n", 3);
}

void    ra_rb(t_stack **stack, int flag)
{
	t_stack	*top;
	t_stack *second;
	t_stack	*last;

	top = *stack;
	second = top->next;
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	last->next = top;
	top->next = NULL;
	*stack = second;
	if (flag == 1)
		write(1, "ra\n", 3);
	else if (flag == 2)
		write(1, "rb\n", 3);
}

void    rr(t_stack **a, t_stack **b)
{
    ra_rb(a, 3);
    ra_rb(b, 3);
    write(1, "rr\n", 3);
}

void    rra_rrb(t_stack **stack, int flag)
{
	t_stack *top;
	t_stack *prev;
	t_stack *last;

	top = *stack;
	prev = *stack;
	while (prev->next != NULL && prev->next->next != NULL)
		prev = prev->next;
	last = prev->next;
	prev->next = NULL;
	last->next = top;
	*stack = last;
	if (flag == 1)
		write(1, "rra\n", 4);
	else if (flag == 2)
		write(1, "rrb\n", 4);
}

void    rrr(t_stack **a, t_stack **b)
{
    rra_rrb(a, 3);
    rra_rrb(b, 3);
    write(1, "rrr\n", 4);
}


int main(void)
{
    //create stack a
    t_stack *head_a = NULL;
    head_a = (t_stack *) malloc(sizeof(t_stack));

    head_a->data = 5;
    head_a->next = (t_stack *)malloc(sizeof(t_stack));
    head_a->next->data = 10;
    head_a->next->next = (t_stack *)malloc(sizeof(t_stack));
    head_a->next->next->data = 15;
    head_a->next->next->next = NULL;


    //create stack b
    t_stack *head_b = NULL;
    head_b = (t_stack *)malloc(sizeof(t_stack));

    head_b->data = 6;
    head_b->next = malloc(sizeof(t_stack));
    head_b->next->data = 12;
    head_b->next->next = malloc(sizeof(t_stack));
    head_b->next->next->data = 18;
    head_b->next->next->next = NULL;


    //display A
    t_stack *temp_a;
    temp_a = head_a;
    while (temp_a != NULL)
   	 {
  			 printf ("%d\n", temp_a->data);
 			 temp_a = temp_a->next;
  	 }


    //display B
    printf("\n");
    t_stack *temp_b;
    temp_b = head_b;
    while(temp_b != NULL)
    {
   	 printf("%d\n", temp_b->data);
   	 temp_b = temp_b->next;
    }


    //perform operations
    //sa_sb(&head_a, 1);
    //sa_sb(&head_b, 2);
    //ss(&head_a, &head_b);
    //pa_pb(&head_a,&head_b,1);
    //pa_pb(&head_b,&head_a,2);    
    //ra_rb(&head_a, 1);
	//ra_rb(&head_b, 2);
   	//rr(&head_a, &head_b);
	//rra_rrb(&head_a, 1);
	///rrr(&head_a, &head_b);
	//pa(&head_a, &head_b);
	pa(&head_a, &head_b);

    //display a
    t_stack *curr_a;
    curr_a = head_a;
    printf("\n");
    while(curr_a != NULL)
    {
   	 printf("%d\n", curr_a->data);
   	 curr_a = curr_a->next;
    }

    //display b
    printf("\n");
    t_stack *curr_b;
    curr_b = head_b;
    while(curr_b)
    {
   	 printf("%d\n", curr_b->data);
   	 curr_b = curr_b->next;
    }
    


    return (0);
}

