#include "monty.h"

/**
 * _pint - prints the value at the top of the stack
 * @head: first element in the stack
 * @index: line number
 */
void _pint(stack_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", index);
		fclose(cat.file);
		free(cat.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
/**
 * _pop - removes the top element of the stack
 * @head: first element in the stack
 * @index: line number
 */
void _pop(stack_t **head, unsigned int index)
{
	stack_t *m;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", index);
		fclose(cat.file);
		free(cat.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	m = *head;
	*head = m->next;
	free(m);
}
