#include "monty.h"

void free_stack(stack_t **stack)
{
	stack_t *temp = NULL;

	if(stack == NULL || *stack == NULL)
		return;

	while(stack != NULL || *stack != NULL)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}
/*
*
*/
int str_number(char str[])
{
	int n = 0;

	if(str[0] == '-')
		str[0] = 0;
	for(n = 0; str[n]; n++)
		if (!isdigit(str[n]))
			return(0);
	
	return(1);
}
