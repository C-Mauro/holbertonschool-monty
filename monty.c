#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/*
 *
 *
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *buf = NULL;
	size_t bufsize = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&buf, &bufsize, file) != -1)


	return (EXIT_SUCCESS);

}

