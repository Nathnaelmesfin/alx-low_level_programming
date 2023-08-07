#include "main.h"

/**
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t b, c;
	char *d;

	if (!filename)
		return (0);

	a = open(filename, O_RDONLY);

	if (a == -1)
		return (0);

	d = malloc(sizeof(char) * (letters));
	if (!d)
		return (0);

	b = read(a, d, letters);
	c = write(STDOUT_FILENO, d, b);

	close(a);

	free(d);

	return (c);
}
