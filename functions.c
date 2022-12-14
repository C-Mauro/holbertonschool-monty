#include "monty.h"
#include <stdlib.h>
/**int number;
 *
 */
void push(stack_t **stack, unsigned int line_number)
{

	stack_t *newnode, tmp;

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: stack not found\n", line_number);
		exit(EXIT_FAILURE);
	}

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	new->prev = NULL;
	new->n = n;
	new->next = *stack;

	if (*stack)
		tmp->prev = NULL;
	*stack = new;

}
void pall(stack_t **stack, unsigned int line_number)
{
        stack_t *temp;
        (void)line_number;

        temp = *stack;
        while (temp)
        {
                printf("%d\n", temp->n);
                temp = temp->next;
        }
}

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (stack == NULL)
	{
		fprintf(stderr, " L<line_number>: can't pint, stack empty");
		exit(EXIT_FAILURE);
	}
	while (temp)
		printf("%d\n", temp->n);

}

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack

	if (stack == NULL)
		fprintf(stderr, "L<line_number>: can't pop an empty stack");
	exit(EXIT_FAILURE);

}
