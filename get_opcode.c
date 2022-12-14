#include "monty.h"
#include <stdlib.h>
#include <string.h>
/**
 *
 */
void get_opcode(char *token, stack_t **stack, unsigned int line_number)
{
	unsigned int i = 0;

	instruction_t ops[] = {
                {"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
                {NULL, NULL},
        };

	while (ops[i].opcode)
	{
		if (strcmp(ops[i].opcode, token) == 0)
		{
			(ops[i].f(stack, line_number));
		}
		i++;
	}

	exit(EXIT_FAILURE);
}
void free_stack(stack_t **stack)
{
	stack_t *temp = NULL;

        if (stack == NULL || *stack == NULL)
                return;

        while (*stack != NULL)
        {
                temp = (*stack)->next;
                free(*stack);
                *stack = temp;
        }
}
