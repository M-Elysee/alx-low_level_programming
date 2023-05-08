#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* close_file_d - provides special output when fd can't close
* @cl: is the return value of the close system call
*/
void close_file_d(int cl)
{
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cl);
		exit(100);
	}
}
/**
* readerr - handles errors in system reading
* @ptr: pointes to the memory allocated for buffer
* @argv: points to the name of the first file
*/
void readerr(char *ptr, char *argv)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
	free(ptr);
	exit(98);
}
/**
* writeerr - handles error in system writing
* @ptr: points to the memory allocated for buffer
* @argv: points to the name of the second file
*/
void writeerr(char *ptr, char *argv)
{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv);
	free(ptr);
	exit(99);
}
/**
* main - takes 2 files as arguments and copy the first into the second
* @argc: is the number of line arguments
* @argv: points to the array of files added as argument
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *ptr;
	int f_file_d, t_file_d, rd, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_file_d = open(argv[1], O_RDONLY);
	t_file_d = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	ptr = malloc(sizeof(char) * 1024);
	if (ptr == NULL)
		writeerr(ptr, argv[2]);
	rd = read(f_file_d, ptr, 1024);
	do {
		if (f_file_d == -1 || rd == -1)
			readerr(ptr, argv[1]);
		wr = write(t_file_d, ptr, rd);
		if (t_file_d == -1 || wr == -1)
			writeerr(ptr, argv[2]);
		rd = read(f_file_d, ptr, 1024);
		t_file_d = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(ptr);
	close_file_d(close(t_file_d));
	close_file_d(close(f_file_d));
	return (0);
}
