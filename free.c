#include "monty.h"
/**
*free_stack - free stack
*@stack: stack
*
*/

void free_stack(stack_t **stack)
{
	stack_t *temp = NULL;

	if (stack == NULL || *stack == NULL)
		return;

	while (stack != NULL || *stack != NULL)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}
/**
* str_number - check number
* @str: string
*
*Return: 1 if it is a number or 0
*/
int str_number(char str[])
{
	int n = 0;

	if (str[0] == '-')
		str[0] = 0;
	for (n = 0; str[n]; n++)
		if (!isdigit(str[n]))
			return (0);

	return (1);
}
