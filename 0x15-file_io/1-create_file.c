#include "main.h"
/**
* create_file - creates a new file containing some given texts
* @filename: points to the name of the file
* @text_content:points to the text which we want to include in the file
* Return: 1 on success or -1 on error
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t file_d, c_file;
	size_t i;
	int wr;

	if (filename == NULL)
		return (-1);
	c_file = creat(filename, 0600);
	file_d = open(filename, O_WRONLY);
	if (c_file == -1 || file_d == -1)
		return (-1);
	for (i = 0; text_content != NULL && text_content[i]; i++)
		;
	wr = write(file_d, text_content, i);
	if (wr == -1)
		return (-1);
	close(file_d);
	close(c_file);
	return (1);
}
