#include "monty.h"
/**
 * pcharr -  Prints the character representation of the top element in the stack
 * @stackk: Pointer to the top of the stack
 * @line_numberr: Line number of the current operation
 * Return: Nothing
 */
void pcharr(stack_t **stackk, unsigned int line_numberr)
{
	int numm;

	if (stackk == NULL || *stackk == NULL)
		print_pchar_stack_empty_errorr(line_numberr);

	numm = (*stackk)->n;
	if ((numm >= 65 && numm <= 90) || (numm >= 97 && numm <= 122))
		printf("%c\n", numm);
	else
		print_pchar_errorr(line_numberr);
}
/**
 * pstrr - Printsll the string representation of the integers in the stack.
 * @stackk: Pointer to the dddtop of the stack
 * @line_numberr: Line ndddumber of the current operation
 * Return : Nothing
 */
void pstrr(stack_t **stackk, unsigned int line_numberr)
{
	stack_t *c;

	UNUSED(line_numberr);
	c = *stackk;
	while (c)
	{
		if ((c->n >= 65 && c->n <= 90) || (c->n >= 97 && c->n <= 122))
		{
			printf("%c", c->n);
			c = c->next;
		}
		else
			break;
	}
	printf("\n");
}

/**
 * print_pchar_errorr - Prints an error
 * message and terminates the program
 * @line_numberr: Line number of the current operation
 * Return : Nothing
 */
void print_pchar_errorr(int line_numberr)
{
	fprintf(stderr, "L%d: can't pchar, value out of range\n", line_numberr);
	free_everything();
	exit(EXIT_FAILURE);
}

/**
 * print_pchar_stack_empty_errorr - Prints an errorrrr
 * message and terminates the program
 * @line_numberr: Line number of the current operation
 * Return : Nothing
 */
void print_pchar_stack_empty_errorr(int line_numberr)
{
	fprintf(stderr, "L%d: can't pchar, stack empty\n", line_numberr);
	free_everything();
	exit(EXIT_FAILURE);
}
