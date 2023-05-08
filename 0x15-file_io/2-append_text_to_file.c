#include "main.h"
/**
* append_text_to_file - adds a text at the end of a given file
* @filename: points to the name of the text file
* @text_content: points to the content we want to append
* Return:1 on success or -1 on error
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int wr, file_d, i;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);
	for (i = 0; text_content != NULL && text_content[i]; i++)
		;
	wr = write(file_d, text_content, i);
	if (wr == -1)
		return (-1);
	close(file_d);
	return (1);
}
