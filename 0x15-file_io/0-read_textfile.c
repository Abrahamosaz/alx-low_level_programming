#include "main.h"
/**
 * read_textfile - read a text file and print to the POSIX standard output
 * @filename: name of the file
 * @letters: numbers of letters it should read and print
 *
 * Description: return the required result
 *
 * Return: return the number of letters read from the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, value, read_val;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0700);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	read_val = read(fd, buffer, letters);
	if (read_val == -1)
	{
		free(buffer);
		return (0);
	}
	value = write(STDOUT_FILENO, buffer, read_val);
	if (value == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	return (value);
}
