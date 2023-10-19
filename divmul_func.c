#include "monty.h"



/**
 * _divv - fff.
 * @stackk: Poinfffter to the stack
 * @line_numberr: Liffffne number of the current operation
 */
void _divv(stack_t **stackk, unsigned int line_numberr)
{
	if (stackk == NULL || *stackk == NULL)
		print_div_errorr(line_numberr);

	if ((*stackk)->next)
	{
		if ((*stackk)->n == 0)
			print_div_by_zero_errorr(line_numberr);
		(*stackk)->next->n /= (*stackk)->n;
		delete_top_nodee(stackk);
	}
	else
		print_div_errorr(line_numberr);

}

/**
 * mull - ss.
 * @stackk: Pointer to thesss stack
 * @line_numberr: Line number of the current operation
 */
void mull(stack_t **stackk, unsigned int line_numberr)
{
	if (stackk == NULL || *stackk == NULL)
		print_mul_errorr(line_numberr);

	if ((*stackk)->next)
	{
		(*stackk)->next->n *= (*stackk)->n;
		delete_top_nodee(stackk);
	}
	else
		print_mul_errorr(line_numberr);

}

/**
 * print_mul_errorr - .
 * @line_numberr: Line number of the current operation
 */
void print_mul_errorr(int line_numberr)
{

	fprintf(stderr, "L%d: can't mul, stack too short\n", line_numberr);
	free_everything();
	exit(EXIT_FAILURE);
}
/**
 * print_div_errorr - rr.
 * @line_numberr: Line numbrrrrrer of the current operation
 */
void print_div_errorr(int line_numberr)
{

	fprintf(stderr, "L%d: can't div, stack too short\n", line_numberr);
	free_everything();
	exit(EXIT_FAILURE);
}

/**
 * print_div_by_zero_errorr - r.
 * @line_numberr: Line numbrrrrrer of the current operation
 */
void print_div_by_zero_errorr(int line_numberr)
{

	fprintf(stderr, "L%d: division by zero\n", line_numberr);
	free_everything();
	exit(EXIT_FAILURE);
}
