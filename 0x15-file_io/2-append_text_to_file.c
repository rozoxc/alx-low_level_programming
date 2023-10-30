#include "main.h"
/**
 * append_text_to_file -  function that appends text at the end of a file
 * @filename:  is the name of the file
 * @text_content: text to be printed
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);
	if (text_content != NULL)
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
