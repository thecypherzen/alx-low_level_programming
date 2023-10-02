#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @agc: number of cmd arguments
 * @agv: ptr to argument filenames
 * Return: (0) on success, (-1) if malloc fails, (97) if num of wrong number of
 *         args is passed, (98) if dest file doesnt exist or reading from it
 *         fails, (99) if creating dest file or writing to it fails,
 *         (100) if closing either dest file or src file fails.
 */
int main(int agc, char **agv)
{
	size_t reading = 1;
	ssize_t fd_src, fd_dest, bytes_wtn, bytes_rd, pos = 0;
	char *buffr;

	if (agc != 3)
		return (wrong_args(agv[0]));
	fd_src = open(agv[1], O_RDONLY), buffr = malloc(BUFF_SIZE);
	if (fd_src < 0)
		return (read_fail(agv[1]));
	fd_dest = open(agv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_dest < 0)
		return (write_fail(agv[2]));
	if (!buffr)
		return (-1);
	while (reading)
	{
		pos = lseek(fd_src, pos, SEEK_SET);
		if (pos >= 0)
		{
			bytes_rd = read(fd_src, buffr, BUFF_SIZE);
			if (bytes_rd < 0)
				return (read_fail(agv[1]));
			bytes_wtn = write(fd_dest, buffr, bytes_rd);
			if (bytes_wtn < 0)
				return (write_fail(agv[2]));
			pos += bytes_rd;
		}
		reading = bytes_rd < BUFF_SIZE ? 0 : 1;
	}
	free(buffr), close_fd(fd_src, fd_dest);
	return (0);
}
/**
 * close_fd - closes a file descriptor
 * @fd_a: first file descriptor
 * @fd_b: second file descriptor
 * Return: 100 if close failed. 0 if successful
 */
void close_fd(ssize_t fd_a, ssize_t fd_b)
{
	ssize_t res_fd_a, res_fd_b;

	res_fd_a = close(fd_a), res_fd_b = close(fd_b);
	if (res_fd_a < 0)
		dprintf(STDOUT_FILENO, "Error: Can't close fd %lu\n", fd_a);
	if (res_fd_b < 0)
		dprintf(STDOUT_FILENO, "Error: Can't close fd %lu\n", fd_b);
	if (res_fd_a < 0 || res_fd_b < 0)
		exit(100);
}
/**
 * wrong_args - prints message if wrong arguments are passed
 * @fname: filename passed as argument
 * Return: 97 always
 */
int wrong_args(char *fname)
{
	dprintf(STDOUT_FILENO, "Usage: %s file_from file_to\n", fname);
	return (97);
}
/**
 * read_fail - prints message if reading from src fails
 * @fname: filename of sourcefile
 * Return: 98 always
 */
int read_fail(char *fname)
{
	dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", fname);
	return (98);
}
/**
 * write_fail - prints message if wrigint to destination fails
 * @fname: destination filename
 * Return: 99 always
 */
int write_fail(char *fname)
{
	dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", fname);
	return (99);
}
