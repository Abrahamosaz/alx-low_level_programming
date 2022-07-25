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
	int fd, lenght;
	ssize_t res_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		lenght = 0;
		while (*(text_content + lenght) != '\0')
			lenght++;
		res_write = write(fd, text_content, lenght);
		if (res_write == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
