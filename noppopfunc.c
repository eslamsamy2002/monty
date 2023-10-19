#include "monty.h"
/**
 * popp - Removes the top element from the stack.
 * @stackk: Pointer to the top of the stack
 * @line_numberr: Line number of the current operation
 * Return: Nothing
 */
void popp(stack_t **stackk, unsigned int line_numberr)
{
	/* Check if the stack or sssssssthe top elemensssst is empty */
	if (stackk == NULL || *stackk == NULL)
		print_empty_stack_errorr(line_numberr);

	delete_top_nodee(stackk);
}
/**
 * nopp - Removessss the top element from the stack.
 * @stackk: Pointer to the top of the stack
 * @line_numberr: Line number of the current operation
 * Return :Nothing
 */
void nopp(stack_t **stackk, unsigned int line_numberr)
{
	UNUSED(stackk);
	UNUSED(line_numberr);
}

/**
 * print_empty_stack_errorr - Prints ansss error
 * message and terminates the program
 * @line_numberr: Line number of the current operation
 */
void print_empty_stack_errorr(int line_numberr)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_numberr);
	free_everything();
	exit(EXIT_FAILURE);
}
