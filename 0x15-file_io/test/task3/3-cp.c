#include "main.h"

/**
 * main - copies the content of a file to another file.
 * ar
 * Return: 0 always
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
			printf("Bytes read: %ld | ", bytes_rd);
			if (bytes_rd < 0)
				return (read_fail(agv[1]));
			bytes_wtn = write(fd_dest, buffr, bytes_rd);
			printf("Bytes witten: %ld\n", bytes_wtn);
			if (bytes_wtn < 0)
				return (write_fail(agv[2]));
			printf("Position before: %ld | ", pos);
			pos += bytes_rd;
			printf("Position after: %ld\n", pos);
		}
		reading = bytes_rd < BUFF_SIZE ? 0 : 1;
	}
	free(buffr), close_fd(fd_src, fd_dest);
	return (0);
}
/**
 * close_fd - closes a file descriptor
 * @fd: the file descriptor id
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

int wrong_args(char *fname)
{
	dprintf(STDOUT_FILENO, "Usage: %s file_from file_to\n", fname);
	return (97);
}

int read_fail(char *fname)
{
	dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", fname);
	return (98);
}

int write_fail(char *fname)
{
	dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", fname);
	return (99);
}
