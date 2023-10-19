#include "monty.h"
/**
 * subtract - Subllll
 * @stackk: Pointer to the stlllllack
 * @line_numberrr: Linellllll
 */
void subtract(stack_t **stackk, unsigned int line_numberrr)
{
	if (stackk == NULL || *stackk == NULL)
		print_sub_errorr(line_numberrr);

	if ((*stackk)->next)
	{
		(*stackk)->next->n -= (*stackk)->n;
		delete_top_nodee(stackk);
	}
	else
		print_sub_errorr(line_numberrr);
}

/**
 * addd - .
 * @stackk: Pointer to the stacsssk
 * @line_numberr: Line number of the current operation
 */
void addd(stack_t **stackk, unsigned int line_numberr)
{
	if (stackk == NULL || *stackk == NULL)
		print_add_errorr(line_numberr);

	if ((*stackk)->next)
	{
		(*stackk)->next->n += (*stackk)->n;
		delete_top_nodee(stackk);
	}
	else
		print_add_errorr(line_numberr);
}

/**
 * modd - .
 * @stackk: Pointer to the stack
 * @line_numberr: Line number of the current operation
 */
void modd(stack_t **stackk, unsigned int line_numberr)
{
	if (stackk == NULL || *stackk == NULL)
		print_mod_errorr(line_numberr);

	if ((*stackk)->next)
	{
		if ((*stackk)->n == 0)
			print_div_by_zero_errorr(line_numberr);
		(*stackk)->next->n %= (*stackk)->n;
		delete_top_nodee(stackk);
	}
	else
		print_mod_errorr(line_numberr);
}

/**
 * print_mod_errorr - .
 * @line_numberr: Line number of the current operation
 */
void print_mod_errorr(int line_numberr)
{

	fprintf(stderr, "L%d: can't mod, stack too short\n", line_numberr);
	free_everything();
	exit(EXIT_FAILURE);
}


/**
 * print_add_errorr - .
 * @line_numberr: Line number of the current operation
 */
void print_add_errorr(int line_numberr)
{

	fprintf(stderr, "L%d: can't add, stack too short\n", line_numberr);
	free_everything();
	exit(EXIT_FAILURE);
}
