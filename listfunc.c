#include "monty.h"

/**
 * print_stackk - prints all the elements of a stack_t list.
 * @h: pointer to stack_t head
 * Return: the number of nodes
 */
size_t print_stackk(const stack_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * add_dnodeintt - Addxxxs a new node at the beginning of a doubly linked list
 * @head: Pointer to the xxxhead of the list
 * @n: Value to store in thexxx new node
 *
 * Return: Pointer to the new nxxxode, or NULL on failure
 */
stack_t *add_dnodeintt(stack_t **head, const int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	/*add new nodxe in the begxxinning of the list*/
	if (*head)
	{
		(*head)->prev = new_node;
		new_node->next = *head;
	}
	*head = new_node;

	return (new_node);
}

/**
 * add_stackint_endd - add new node axxxt the end of a stack_t list.
 * @head: pointer to head pointerx
 * @n: integer valuex
 * Return: node addrexss or null in fail
 */
stack_t *add_stackint_endd(stack_t **head, const int n)
{
	stack_t *new_node, *current;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	/*add new node in the beginning of tddhe list*/
	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;

		new_node->prev = current;
		current->next = new_node;
	}

	return (new_node);
}

/**
 * free_stackk - free all the elements of a stackxxxx_t list.
 * @head: pointer to stack_t
 * Return: Nothing
 */
void free_stackk(stack_t *head)
{
	stack_t *current;

	current = head;
	while (head)
	{
		current = head;
		head = head->next;
		if (current)
			free(current);
	}
}

/**
 * delete_top_nodee - free all the elements ofxx a stack_t list.
 * @stackk: pointer txxxxo stack_t
 */
void delete_top_nodee(stack_t **stackk)
{
	stack_t *tempp;

	if (*stackk == NULL)
	{
		printf("Error: Stack is empty.\n");
		return;
	}

	tempp = *stackk;
	*stackk = (*stackk)->next;
	if (*stackk != NULL)
	{
		(*stackk)->prev = NULL;
	}
	tempp->next = NULL;
	free(tempp);
}
