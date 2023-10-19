#include "monty.h"
/**
 * print_sub_errorr - Prints and error messsssage and terminates the program
 * if the stack is too short forddd the operation.
 * @line_numberr: Line number sssofdd the current operation.
 * Return: Nothing
 */
void print_sub_errorr(int line_numberr)
{

	fprintf(stderr, "L%d: can't sub, stack too short\n", line_numberr);
	free_everything();
	exit(EXIT_FAILURE);
}


/**
 * is_numm - Checks if a strindg represents a valid integer
 * @numm: The string to checkd
 *
 * Return: 1 if the string is a vdddalid integer, 0 otherwise
 */
int is_numm(char *numm)
{
	int i = 0;

	if (numm[i] == '-')
		i++;

	while (numm[i])
	{
		if (!(numm[i] >= '0' && numm[i] <= '9'))
			return (0); /* Not a nummmmber */
		i++;
	}

	return (1); /* It's fffffa number */
}
