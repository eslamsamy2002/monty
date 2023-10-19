#include "monty.h"
/**
 * execute_file - Executes the operations in a file
 * @file_name: Name of the file containing the operations
 *
 * Return: 0 on success, -1 on failure
 */
int execute_file(char *file_name)
{
	FILE *file;
	char *line = NULL;
	size_t line_length = 0;
	ssize_t read;
	/*Open the file*/
	file = fopen(file_name, "r");
	if (file == NULL)
		print_open_file_errorr(file_name);
	my_data.file = file;
	/*Read and execute each line until the end of the file*/
	while ((read = getline(&line, &line_length, file)) != -1)
	{
		my_data.line_number++;
		my_data.line = line;
		if (is_empty_line(my_data.line) == 1)
			execute_line(my_data.line, my_data.line_number);
	}
	free_stackk(my_data.stack);
	fclose(file);
	free(line);
	return (0);
}
/**
 * execute_line - Executes a single line of operation
 * @line: Line of operation
 * @line_number: Line number of the current operation
 */
void execute_line(char *line, int line_number)
{
	int i;
	int is_instruction = -1;
	instruction_t instructions[] = {
		{"push", pushh},
		{"pop", popp},
		{"pall", palll},
		{"pint", pintt},
		{"swap", swapp},
		{"nop", nopp},
		{"sub", subtract},
		{"div", _divv},
		{"add", addd},
		{"mul", mull},
		{"mod", modd},
		{"pchar", pcharr},
		{"pstr", pstrr},
		{"rotl", rotll},
		{"rotr", rotrr},
		{"stack", stackk},
		{"queue", queuee},
	};
	my_data.arg1 = strtok(line, " \n");
	my_data.arg2 = strtok(NULL, " \n");
	if (my_data.arg1[0] == '#')
	{
		nopp(&my_data.stack, line_number);
		return;
	}
	for (i = 0; i < INSTRUCTIONS_COUNT; i++)
		if (strcmp(my_data.arg1, instructions[i].opcode) == 0)
		{

			is_instruction = i;
			break;
		}
	if (is_instruction != -1)
		instructions[i].f(&my_data.stack, line_number);
	else
		print_invalid_instruction_(line_number, my_data.arg1);
}
/**
 * is_empty_line - .
 * @line: Line to check
 *
 * Return: 1 if the line is empty, 0 otherwise
 */
int is_empty_line(char *line)
{
	int i;
	int length = strlen(line);

	if (length > 0)
	{
		/* Check if the line ends with '\n'*/
		if (line[length - 1] == '\n')
		{
			/*Check if the line contains any characters before '\n'*/
			for (i = 0; i < length - 1; i++)
			{
				if (line[i] != ' ')
					return (1);
			}
			return (0);
		}
	}

	return (0);
}
