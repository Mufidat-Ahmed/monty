#include "monty.h"

/**
 * execute - executes an opcode for the monty interpreter
 * @content: line contents of the opcode
 * @stack: linked list to be used
 * @counter: integer to be used
 * @file: points to the monty file
 */
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", _push}, {"pall", _pall}, {"pint", _pint},
				{"pop", _pop}, {"sub", _sub}, {"div", _div},
				{"mul", _mul}, {"mod", _mod}, {"pchar", _pchar},
				{"pstr", _pstr}, {"rotl", _rotl}, {"rotr", _rotr},
				{"queue", _queue}, {"stack", _stack}, {NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	cat.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		_free(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
