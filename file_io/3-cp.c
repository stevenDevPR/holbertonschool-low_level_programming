#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 1024
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 97 on failure, 98 on failure, 99 on failure, 100 on failure, or 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			close(fd_from), exit(99);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read || bytes_written == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					argv[2]), close(fd_from), close(fd_to), exit(99);
	}

	if (bytes_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			close(fd_from), close(fd_to), exit(98);

	if (close(fd_from) == -1 || close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (close(fd_from) == -1) ?
				fd_from : fd_to), exit(100);

	return (0);
}
