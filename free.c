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


