#include "main.h"
/**
 * append_text_to_file - append text to the end of file
 * @filename: name of file
 * @text_content: text to be append
 *
 * Description: return the required result
 *
 * Return: return integer value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, value;
	size_t i;

	if (!filename)
		return (-1);
	if (text_content)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		i = 0;
		while (text_content[i++])
			;
		value = write(fd, text_content, i);
		if (value == -1)
		{
			close(fd);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
