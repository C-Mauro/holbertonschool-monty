#include "monty.h"
#include <stdlib.h>
/**int number;
 *
 */
void push(stack_t **stack, unsigned int line_number)
{

	stack_t *newnode;
	int n = 0;

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

	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = *stack;

	if (*stack)
	{
		newnode->prev = NULL;
		*stack = newnode;
	}
}
void pall(stack_t **stack, __attribute__((unused))unsigned int line_number)
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
		fprintf(stderr, " L%u: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	while (temp)
		printf("%d\n", temp->n);

}

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = temp->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(temp);
}
