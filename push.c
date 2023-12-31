#include "monty.h"
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
			flag = 1;
	}
	if (flag == 1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", index);
		fclose(cat.file);
		free(cat.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", index);
		fclose(cat.file);
		free(cat.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(cat.arg);
	if (cat.lifi == 0)
		add_node(head, n);
	else
		add_queue(head, n);
}
