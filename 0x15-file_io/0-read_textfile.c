#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
  * read_textfile - read and prints to POSIX stdout
  * @filename: path of file
  * @letters: no of chars to be read
  * Return: letters to be read
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytes, r;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(fd);
		return (0);
	}
	bytes = read(fd, buff, letters);

	if (bytes == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	r = write(STDOUT_FILENO, buff, bytes);
	if (r == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	close(fd);
	return (bytes);
}

