#include "monty.h"
/**
 * pop - Removes the top element from the stack.
 * @stack: Pointer to the top of the stack
 * @line_number: Line number of the current operation
 * Return: Nothing
 */
void pop(stack_t **stack, unsigned int line_number)
{
	/* Check if the stack or the top element is empty */
	if (stack == NULL || *stack == NULL)
		print_empty_stack_error(line_number);

	delete_top_node(stack);
}
/**
 * pint - Prints the value of the top element in the stack.
 * @stack: Pointer to the top of the stack
 * @line_number: Line number of the current operation
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
		print_pint_error(line_number);

	printf("%d\n", (*stack)->n);
}
/**
 * print_pint_error - Prints an error
 * message and terminates the program
 * @line_number: Line number of the current operation
 */
void print_pint_error(int line_number)
{

	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	free_everything();
	exit
	(EXIT_FAILURE);
}
/**
 * print_empty_stack_error - Prints an error
 * message and terminates the program
 * @line_number: Line number of the current operation
 */
void print_empty_stack_error(int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	free_everything();
	exit(EXIT_FAILURE);
}
