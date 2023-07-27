#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack
 * @head: first element in the stack
 * @index: line number
 */
void _pstr(stack_t **head, unsigned int index)
{
	stack_t *m;
	(void)index;

	m = *head;
	while (m)
	{
		if (m->n > 127 || m->n <= 0)
		{
			break;
		}
		printf("%c", m->n);
		m = m->next;
	}
	printf("\n");
}
/**
 * _pchar - prints the char at the top of the stack
 * @head: first element in the stack
 * @index: line number
 */
void _pchar(stack_t **head, unsigned int index)
{
	stack_t *m;

	m = *head;
	if (!m)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", index);
		fclose(cat.file);
		free(cat.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	if (m->n > 127 || m->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", index);
		fclose(cat.file);
		free(cat.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", m->n);
}
