#include "monty.h"

/**
 * pall - prints stack values
 * @stack: doubly linked list
 * @line_number: number of the current line.
 */
void pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *tmp;

	tmp = *stack;

	if (*stack == NULL)
		return;

	while (tmp->next)
		tmp = tmp->next;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->prev;
	}
}
/**
 * pint - prints top value of  stack.
 * @stack: doubly linked list
 * @line_number: number of the current line.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	while (tmp->next)
		tmp = tmp->next;
	printf("%d\n", tmp->n);
}
/**
 * pop - deletes the current top of stack
 * @stack: doubly linked list
 * @line_number: number of the current line.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *newnode, *remove;

	newnode = *stack;

	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (newnode->next == NULL)
	{
		free(newnode);
		*stack = NULL;
	}
	else
		while (newnode->next->next)
			newnode = newnode->next;
	remove = newnode->next;
	newnode->next = NULL;
	free(remove);
}
