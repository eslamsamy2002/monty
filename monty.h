#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define UNUSED(x) (void)(x)
#define INSTRUCTIONS_COUNT 17
#define STACK 1
#define QUEUE 0
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct my_data_s - Struct to hold data for the Monty interpreter
 *
 * @line_number: The current line number being executed
 * @arg1: The first argument of the current line being executed (if any)
 * @arg2: The second argument of the current line being executed (if any)
 * @stack: Pointer to the top of the stack
 * @file: Pointer to the file being executed
 * @line: Pointer to the current line being executed
 * @mode: The mode of the Monty interpreter (STACK or QUEUE)
 */
typedef struct my_data_s
{
	int line_number;
	char *arg1;
	char *arg2;
	stack_t *stack;
	FILE *file;
	char *line;
	int mode;
} my_data_t;

extern my_data_t my_data;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*error functions*/
void print_open_file_errorr(char *file_namee);
void print_usage_errorr(void);
void print_invalid_instruction_errorr(int line_numberr, char *opcode_instructionn);
void print_malloc_error(void);
void print_push_errorr(int line_numberr);
void print_empty_stack_errorr(int line_numberr);
void print_pint_errorr(int line_numberr);
void print_swap_errorr(int line_numberr);
void print_add_errorr(int line_numberr);
void print_sub_errorr(int line_numberr);
void print_div_errorr(int line_numberr);
void print_div_by_zero_errorr(int line_numberr);
void print_mul_errorr(int line_numberr);
void print_mod_errorr(int line_numberr);
void print_pchar_errorr(int line_numberr);
void print_pchar_stack_empty_errorr(int line_numberr);
/*execute functions*/
int execute_file(char *file_name);
void execute_line(char *line, int line_number);

/*instructions*/
void palll(stack_t **stackk, unsigned int line_numberr);
void popp(stack_t **stackk, unsigned int line_numberr);
void pushh(stack_t **stackk, unsigned int line_numberr);
void pintt(stack_t **stackk, unsigned int line_numberr);
void swapp(stack_t **stackk, unsigned int line_numberr);
void nopp(stack_t **stackk, unsigned int line_numberr);
void subtract(stack_t **stackk, unsigned int line_numberrr);
void addd(stack_t **stackk, unsigned int line_numberr);
void _divv(stack_t **stackk, unsigned int line_numberr);
void mull(stack_t **stackk, unsigned int line_numberr);
void modd(stack_t **stackk, unsigned int line_numberr);
void pcharr(stack_t **stackk, unsigned int line_numberr);
void pstrr(stack_t **stackk, unsigned int line_numberr);
void rotll(stack_t **stackk, unsigned int line_numberr);
void rotrr(stack_t **stackk, unsigned int line_numberr);
void queuee(stack_t **stackk, unsigned int line_numberr);
void stackk(stack_t **stackk, unsigned int line_numberr);

/*linked list functions*/
size_t print_stackk(const stack_t *h);
stack_t *add_dnodeintt(stack_t **head, const int n);
void free_stackk(stack_t *head);
void delete_top_nodee(stack_t **stackk);
stack_t *add_stackint_endd(stack_t **head, const int n);

/*helper*/

void free_everything(void);

int is_empty_line(char *line);
int is_numm(char *numm);
#endif 
