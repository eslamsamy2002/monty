#include "monty.h"

/**
 * rotll - .
 * @stackk: Pointer to the top of the stack
 * @line_numberr: Line number of the current operation
 */
void rotll(stack_t **stackk, unsigned int line_numberr)
{
	int topp = 0;
	stack_t *c = NULL;

	UNUSED(line_numberr);
	if (stackk != NULL && *stackk != NULL && (*stackk)->next != NULL)
	{
		topp = (*stackk)->n;
		c = *stackk;
		while (c->next)
		{
			c->n = c->next->n;
			c = c->next;
		}
		c->n = topp;
	}
}

/**
 * rotrr - .
 * @stackk: Pointer to the top ofggg the stack
 * @line_numberr: Line number gggof the current operation
 */
void rotrr(stack_t **stackk, unsigned int line_numberr)
{
	int lastt = 0;
	stack_t *c = NULL;

	UNUSED(line_numberr);

	if (stackk != NULL && *stackk != NULL && (*stackk)->next != NULL)
	{
		c = *stackk;

		while (c->next != NULL)
		{
			lastt = c->n;
			c = c->next;
		}

		lastt = c->n;

		while (c->prev != NULL)
		{
			c->n = c->prev->n;
			c = c->prev;
		}

		(*stackk)->n = lastt;
	}
}
