#include "monty.h"

/**
 * stackk - s.
 * @stackk: Pointer to the top of the stack
 * @line_numberr: Line number of the current operation
 */
void stackk(stack_t **stackk, unsigned int line_numberr)
{
	UNUSED(stackk);
	UNUSED(line_numberr);
	my_data.mode = STACK;
}


/**
 * queuee - s.
 * @stackk: Pointer to the top of the stack
 * @line_numberr: Line number of the current operation
 */
void queuee(stack_t **stackk, unsigned int line_numberr)
{
	UNUSED(stackk);
	UNUSED(line_numberr);
	my_data.mode = QUEUE;
}
