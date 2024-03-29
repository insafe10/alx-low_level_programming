#include "main.h"

/**
 * create_file - creates a file with the given filename
 *       & writes the given text content to the file
 *
 * @filename: The name of the file to create
 * @text_content: The txt content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, res, i;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		i = 0;

		while (text_content[i] != '\0')
			i++;
		res = write(fd, text_content, i);
		if (res == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
