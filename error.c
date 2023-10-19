#include "monty.h"

/**
 * print_usage_errorr - .
 */
void print_usage_errorr(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 * print_open_file_errorr - .
 * @file_namee: ..
 */
void print_open_file_errorr(char *file_namee)
{
	fprintf(stderr, "Error: Can't open file %s\n", file_namee);
	exit(EXIT_FAILURE);
}
/**
 * print_invalid_instruction_ - Prints an error message and exits when
 * @line_numberr: Line number of the current operation
 * @opcode_instructionn: Pointer to the unrecognized opcode
 */
void print_invalid_instruction_(int line_numberr, char *opcode_instructionn)
{

	fprintf(stderr, "L%d: unknown instruction %s\n",
							line_numberr, opcode_instructionn);
	free_everything();
	exit(EXIT_FAILURE);
}
/**
 * print_malloc_errorr - .
 */
void print_malloc_errorr(void)
{
	free_everything();
	fprintf(stderr, "Error: malloc failed");
	exit(EXIT_FAILURE);
}
