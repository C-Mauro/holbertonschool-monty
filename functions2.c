#include "monty.h"

/**
 * swap - prints top stack value 
 * @stack: double linked list
 * @line_number: number of current line
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int t;
	stack_t *temp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	while (temp->next)
		temp = temp->next;
	if (temp->prev == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	t = temp->n;
	temp->n = temp->prev->n;
	temp->prev->n = t;
}
/**
 * add - prints the top value of the stack.
 * @stack: double linked list 
 * @line_number: number of current line
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (*stack == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	while (temp->next->next)
		temp = temp->next;
	temp->n += temp->next->n;
	pop(stack, line_number);
}
#include "monty.h"
/**
 * push - push element to the stack
 * @stack: doubly linked list.
 * @line_number: number of current line.
 */
void push(stack_t **stack, unsigned int line_number)
{
        stack_t *newnode = NULL, *tmp = *stack;
        int number = 0;
        char *str = NULL;

        str = strtok(NULL, " \t\n");
        if (str == NULL || str_number(str) == 0)
        {
                fprintf(stderr, "L%u: usage: push integer\n", line_number);
                exit(EXIT_FAILURE);
        }
        number = atoi(str);
        newnode = malloc(sizeof(stack_t));
        if (!newnode)
                return;
        newnode->n = number;
        newnode->next = NULL;
        if (tmp)
        {
                while (tmp->next)
                        tmp = tmp->next;
                newnode->prev = tmp;
                tmp->next = newnode;
        }
        else
        {
                *stack = newnode;
                newnode->prev = NULL;
        }
}
