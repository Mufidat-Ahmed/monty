#include "monty.h"

void _nop(stack_t **head, unsigned int index);
void _add(stack_t **head, unsigned int index);
/**
 * _swap - exchanges the top two elements of the stack
 * @head: first element in the stack
 * @index: line number
 */
void _swap(stack_t **head, unsigned int index)
{
	stack_t *m;
	int len = 0, aux;

	m = *head;
	while (m)
	{
		m = m->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", index);
		fclose(cat.file);
		free(cat.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	m = *head;
	aux = m->n;
	m->n = m->next->n;
	m->next->n = aux;
}
/**
 * _add - adds the top two element in the stack
 * @head: first element in the stack
 * @index: line number
 */
void _add(stack_t **head, unsigned int index)
{
	stack_t *m;
	int len = 0, aux;

	m = *head;
	while (m)
	{
		m = m->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", index);
		fclose(cat.file);
		free(cat.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	m = *head;
	aux = m->n + m->next->n;
	m->next->n = aux;
	*head = m->next;
	free(m);
}
/**
 * _nop - doesnt do anything
 * @head: first element in the stack
 * @index: line number
 */
void _nop(stack_t **head, unsigned int index)
{
	(void) index;
	(void) head;
}
