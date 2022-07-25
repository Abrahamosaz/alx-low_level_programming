#include "main.h"
/**
 * create_file - create a file
 * @filename: filename
 * @text_content: text content of the file
 *
 * Description: return the required result
 *
 * Return: return integer  value
 */
int create_file(const char *filename, char *text_content)
{
	int fd, value;
	size_t i;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		i = 0;
		while (text_content[i++])
			;
		value = write(fd, text_content, i);
		if (value == -1)
		{
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
