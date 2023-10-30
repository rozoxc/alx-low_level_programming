#include "main.h"
/**
 * create_file -  function that creates a file.
 * @filename:  is the name of the file to create
 * @text_content: the content of this file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);
	file = fopen(filename, "w");
	if (file == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fclose(file);
		return (1);
	}
	else
	{
		if (fprintf(file, "%s", text_content) < 0)
		{
			fclose(file);
			return (-1);
		}
	}
	fclose(file);
	return (1);
}
