#include "monty.h"

/**
 * _mod - computes of the division of the second top element of the stack
 * @head: first element in the stack
 * @index: line number
 */
void _mod(stack_t **head, unsigned int index)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", index);
		fclose(cat.file);
		free(cat.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	m = *head;
	if (m->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", index);
		fclose(cat.file);
		free(cat.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	aux = m->next->n % m->n;
	m->next->n = aux;
	*head = m->next;
	free(m);
}
