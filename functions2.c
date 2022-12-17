#include "monty.h"
#include <stdlib.h>
/**
 *
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int t;


	if (stack == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	t = temp->n;
	temp->n = temp->next->n;
	temp->next->n = t;
	

}

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack; 

	if (!(*stack) || !temp->next)

		fprintf(stderr, "L%u: can't add, stack too short", line_number);
	exit(EXIT_FAILURE);

	while (temp->next->next)
	{
		temp = temp->next;
		temp->n = temp->next->n;
		temp->n += temp->next->n;

		
	pop(stack, line_number);
	}


}

void nop(stack_t **stack, unsigned int line_number)
{
	(void)*stack;
	(void)line_number;

}
