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
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
	{
		write(STDOUT_FILENO, "fails", 5);
		return (-1);
	}
	i = 0;
	while (text_content[i] != '\0')
	{
		value = write(fd, &text_content[i], 1);
		if (value < 0)
		{
			write(STDOUT_FILENO, "fails", 5);
		}
		i++;
	}
	close(fd);
	return (1);
}
