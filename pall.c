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
/**
 * _push - Add a node to stack
 * @head: first element in the stack
 * @index: line_number
 */
void _push(stack_t **head, unsigned int index)
{
	int n, i = 0, flag = 0;

	if (cat.arg)
	{
		if (cat.arg[0] == '-')
			i++;
		for (; cat.arg[i] != '\0'; i++)
		{
			if (cat.arg[i] > 57 || cat.arg[i] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", index);
			fclose(cat.file);
			free(cat.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", index);
		fclose(cat.file);
		free(cat.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(cat.arg);
	if (cat.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
