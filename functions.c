#include "monty.h"
#include <stdlib.h>
/**int number;
 *
 */
void push(stack_t **stack, unsigned int line_number)
{

	stack_t *newnode = NULL, *tmp = *stack;
	char *str = NULL;
	int number = 0;

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: stack not found\n", line_number);
		exit(EXIT_FAILURE);
	}
	str = strtok(NULL, " \t\n");
	if (!str || str_number(str) == 0)
	{
		fprintf(stderr,"L%u: Usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	number = atoi(str);
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	newnode->n = number;
	newnode->next = NULL;

	if (tmp)
	{
		while(tmp->next)
		{	
			tmp = tmp->next;
		newnode->prev = tmp;
		tmp->next = newnode;
		}
	}
	else 
	{
		*stack = newnode;
	}	newnode->prev = NULL;
}
void pall(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
        stack_t *node;
	 node = *stack;

	if (*stack == NULL)
		return;

	while(node->next)
	{
		node = node->next;
	} 
        while(node)
        {
               printf("%d\n", node->n);
                node = node->next;
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
	while (temp->next)
	{
		temp = temp->next;
		printf("%d\n", temp->n);
	}

}

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack, *remove;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	if(!temp->next)
	{
		*stack = NULL;
		free(temp);
	}
	else
	
		while(temp->next->next)
			temp = temp->next;
	remove = temp->next;
	temp->next = NULL;
	free(remove);
	
}
