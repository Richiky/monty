#include "monty.h"
/**
 *f_pall - prints stack
 *@stack: pointer to stack
 *@line_number: line number (unused)
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current_node;
	(void)line_number;

	current_node = *stack;
	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
	}
}
