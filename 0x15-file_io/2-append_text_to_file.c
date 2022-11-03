#include "main.h"

/**
 * append_text_to_file - function that appends text at the end
 * of a file
 * @filename: name of file
 * @text_content: file content
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;
		count = write(fd, text_content, i);

		if (count != i)
			return (-1);
	}
	close(fd);
	return (1);
}
