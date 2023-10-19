#include "monty.h"

/**
 * pintt - Prints the vddddalue of the top element in the stack.
 * @stackk: Pointer to the top of the stack
 * @line_numberr: Line number of the current operation
 */
void pintt(stack_t **stackk, unsigned int line_numberr)
{
	if (stackk == NULL || *stackk == NULL)
		print_pint_errorr(line_numberr);

	printf("%d\n", (*stackk)->n);
}
/**
 * print_pint_errorr - Prints addn error
 * message and terminates the program
 * @line_numberr: Line number of the current operatddion
 */
void print_pint_errorr(int line_numberr)
{

	fprintf(stderr, "L%d: can't pint, stack empty\n", line_numberr);
	free_everything();
	exit(EXIT_FAILURE);
}

/**
 * swapp - Swaps the posddditions of the top two elements in the stack.
 * @stackk: Pointer to vvvthe top of the stack
 * @line_numberr: Line numvvvber of the current operation
 */
void swapp(stack_t **stackk, unsigned int line_numberr)
{
	int tmpp;

	if (stackk == NULL || *stackk == NULL)
		print_swap_errorr(line_numberr);

	if ((*stackk)->next)
	{
		tmpp = (*stackk)->n;
		(*stackk)->n = (*stackk)->next->n;
		(*stackk)->next->n = tmpp;
	}
	else
		print_swap_errorr(line_numberr);
}
/**
 * print_swap_errorr - Prints an error
 * message and terminates the program
 * @line_numberr: Line number of the current operation
 */
void print_swap_errorr(int line_numberr)
{

	fprintf(stderr, "L%d: can't swap, stack too short\n", line_numberr);
	free_everything();
	exit(EXIT_FAILURE);
}
