#include "monty.h"
#include <stdlib.h>
/**
 *
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;


	if (stack == NULL)
		fprintf(stderr, "L<line_number>: can't swap, stack too short");
	exit(EXIT_FAILURE);

	

}

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack; 
	stack_t *newnode = NULL; 

	if (stack < 2)
		fprintf(stderr, "L<line_number>: can't add, stack too short");
	exit(EXIT_FAILURE);

	newnode = newnode->n;
	newnode->next = temp;
	temp = newnode;
	temp->next = NULL;

	/*swapp*/

}

void nop(stack_t **stack, unsigned int line_number)
{
	(void)*stack;
	(void)line_number;

}
