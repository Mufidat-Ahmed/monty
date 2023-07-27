#include "monty.h"

/**
 * _sub: substract the first two element in the stack
 * @head: first element in the stack
 * @index: line number
 */
void _sub(stack_t **head, unsigned int index)
{
	stack_t *aux;
	int bus, i;

	aux = *head;
	for (i = 0; aux != NULL; i++)
		aux = aux->next;
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", index);
		fclose(cat.file);
		free(cat.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	bus = aux->next->n - aux->n;
	aux->next->n = bus;
	*head = aux->next;
	free(aux);
}
/**
 * _div - divides the top two elements in the stack
 * @head: first element in the stack
 * @index: line number
 */
void _div(stack_t **head, unsigned int index)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", index);
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
	aux = m->next->n / m->n;
	m->next->n = aux;
	*head = m->next;
	free(m);
}
/**
 * _mul - multiples the top to elements of the stack
 * @head: first element in the stack
 * @index: line number
 */
void _mul(stack_t **head, unsigned int index)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", index);
		fclose(cat.file);
		free(cat.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	m = *head;
	aux = m->next->n * m->n;
	m->next->n = aux;
	*head = m->next;
	free(m);
}
/**
 * _mod - computes the rest of the division of the second top element of the stack 
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
