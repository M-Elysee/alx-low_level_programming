#include "main.h"
/**
* read_textfile - reads a textfile and print it out to the standard output
* @filename: pointes to the name of the textfile
* @letters: is the number of letter to be accessed and printed
* Return: the actual number of letters it printed or 0 otherwise
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_d, rd, wr;
	char *pt;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	pt = malloc(sizeof(char) * letters);
	if (pt == NULL || file_d == -1)
		return (0);
	rd = read(file_d, pt, letters);
	if (rd == -1)
		return (0);
	wr = write(STDOUT_FILENO, pt, rd);
	if (wr == -1)
		return (0);
	close(file_d);
	return (wr);
}

