#include "monty.h"
/**
 *
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int t;

	if ((*stack) == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	while(temp->next)
		temp = temp->next;
	if(temp->prev == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	t = temp->n;
	temp->n = temp->prev->n;
	temp->prev->n = t;
}

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack; 

	if (!(*stack) || !node->next)

		fprintf(stderr, "L%u: can't add, stack too short", line_number);
	exit(EXIT_FAILURE);

	while (node->next->next)
	
		node = node->next;
	node->n += node->next->n;
	pop(stack, line_number);


}

void nop(stack_t **stack, unsigned int line_number)
{
	(void)*stack;
	(void)line_number;

}
