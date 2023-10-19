#include "monty.h"

/**
 * palll - Prints all elements in the stack
 * @stackk: Pointer to the top of the stack
 * @line_numberr: Line number of the current operation
 */
void palll(stack_t **stackk, unsigned int line_numberr)
{
	UNUSED(line_numberr);
	print_stackk(*stackk);
}
/**
 * pushh - Pushes an element onto the stack.
 * @stackk: Pointer to the top of the stack
 * @line_numberr: Line number of the current operation
 */
void pushh(stack_t **stackk, unsigned int line_numberr)
{
	int numm = 0;

	if (my_data.arg2)
	{
		if (is_numm(my_data.arg2))
		{
			numm = atoi(my_data.arg2);
			if (my_data.mode == STACK)
				add_dnodeintt(stackk, numm);
			else
				add_stackint_endd(stackk, numm);
		}
		else
			print_push_errorr(line_numberr);

	}
	else
		print_push_errorr(line_numberr);
}
/**
 * print_push_errorr - Prints an error message and terminates the program
 * @line_numberr: Line number of the current operation
 */
void print_push_errorr(int line_numberr)
{

	fprintf(stderr, "L%d: usage: push integer\n", line_numberr);
	free_everything();
	exit(EXIT_FAILURE);
}
/**
 * free_everything - .
 */
void free_everything(void)
{
	free_stackk(my_data.stack);
	fclose(my_data.file);
	free(my_data.line);
}
