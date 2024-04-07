#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: Name of the file
 * @text_content: Text content to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[bytes_written])
			bytes_written++;
		if (write(fd, text_content, bytes_written) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
