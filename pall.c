#include "monty.h"

void _push(stack_t **head, unsigned int index);
/**
 * _pall - prints the elements presnet in the stack
 * @head: first element in the stack
 * @index: unused variable
 * Return: Nothing
 */
void _pall(stack_t **head, unsigned int index)
{
	stack_t *m;
	(void)index;

	m = *head;
	if (m == NULL)
		return;
	while (m)
	{
		printf("%d\n", m->n);
		m = m->next;
	}
}
