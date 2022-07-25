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
	size_t len;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY, 0600);
	if (fd < -1)
		return (-1);
	len = sizeof(text_content);
	if (text_content)
	{
		value = write(fd, text_content, len);
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
