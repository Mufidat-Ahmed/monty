#include "monty.h"

/**
 * free_stack - fres the stack
 * @head: first node in the stack
 */
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
