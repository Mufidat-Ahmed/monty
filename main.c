#include "monty.h"

cat_t cat = {NULL, NULL, NULL, 0};

/**
 * main - starting point of the monty interpreter
 * @argc: number of arguments present in the file
 * @argv: array containing the monty file
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *content = NULL;
	FILE *file;
	size_t size = 0;
	ssize_t string = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	cat.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (string > 0)
	{
		string = getline(&content, &size, file);
		cat.content = content;
		counter++;
		if (string > 0)
		{
			execute(content, &stack, counter, file);
		}
		free(content);
	}
	_free(stack);
	fclose(file);
return (0);
}
