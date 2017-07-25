#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define l_isspace(c) ((c) == ' ' || (c) == '\n' || (c) == '\r' || (c) == '\t')

static const char *strip(char *str)
{
	size_t length;
	char *result = str;
	while (*result && l_isspace(*result))
		result++;

	length = strlen(result);
	if (length == 0)
		return result;

	while (l_isspace(result[length - 1]))
		result[--length] = '\0';

	return result;

}

static char *read_line(char *line, int max_chars) {
	printf("Type some characters > ");
	fflush(stdout);
	return fgets(line, max_chars, stdin);

}

#define MAX_CHARS 4096

int main(int argc, char** argv){

	char line[MAX_CHARS];

	if (argc != 1) {
		fprintf(stderr, "Usage: %s\n", argv[0]);
		exit(-1);
	}	

	fprintf(stderr, "\nType 'exit' to quit\n\n");

	while (read_line(line, MAX_CHARS) != (char *)NULL) {

		if(!strncmp(line,"exit",4))
			break;
	
		line[strlen(line)-1] = '\0';
		fprintf(stderr, "raw  :>>>%s<<<\n", line);
		const char* result  = strip(line);
		fprintf(stderr, "strip:>>>%s<<<\n", result);
	}

	return 0;
}
