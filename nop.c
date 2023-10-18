#include "monty.h"
/**
 * nop - Removes the top element from the stack.
 * @stack: Pointer to the top of the stack
 * @line_number: Line number of the current operation
 * Return :Nothing
 */
void nop(stack_t **stack, unsigned int line_number)
{
	UNUSED(stack);
	UNUSED(line_number);
}
/**
 * is_num - Checks if a string represents a valid integer
 * @num: The string to check
 *
 * Return: 1 if the string is a valid integer, 0 otherwise
 */
int is_num(char *num)
{
	int i = 0;

	if (num[i] == '-')
		i++;

	while (num[i])
	{
		if (!(num[i] >= '0' && num[i] <= '9'))
			return (0); /* Not a number */
		i++;
	}

	return (1); /* It's a number */
}
