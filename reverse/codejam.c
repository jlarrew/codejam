#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>

int get_nr_cases(size_t *nr_cases)
{
#define RADIX 10
	char *line = NULL;
	size_t line_len = 0;
	size_t count = 0;
	char *end = NULL;
	int rc = 0;
	int result = 0;

	count = getline(&line, &line_len, stdin);
	errno = 0;
	result = strtoll(line, &end, RADIX);
	if (errno == ERANGE || errno != 0) {
		perror("strtoll");
		rc = errno;
		goto error;
	}
	*nr_cases = result;
error:
	if (line) {
		free(line);
		line = NULL;
	}
	return rc;
}

