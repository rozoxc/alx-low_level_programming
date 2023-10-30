#include "main.h"
/**
 * read_textfile -  function that reads a text file and prints it.
 * @filename:  file to be printed
 * @letters: is the number of letters it should read and print
 * Return: return the text printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fp;
	int file;
	ssize_t read_file, write_file;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDWR);
	if (file == -1)
	{
		return (0);
	}
	fp = malloc(letters + 1);
	if (fp == NULL)
	{
		close(file);
		return (0);
	}
	read_file = read(file, fp, letters);
	if (read_file == -1)
	{
		free(fp);
		close(file);
		return (0);
	}
	write_file = write(STDOUT_FILENO, fp, read_file);
	if (write_file == -1)
	{
		free(fp);
		close(file);
		return (0);
	}
	free(fp);
	close(file);
	return (write_file);
}
