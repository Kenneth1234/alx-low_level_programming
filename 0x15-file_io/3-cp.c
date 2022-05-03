#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * check_read_err - program that copies the content of a file to another file
 * @status: int paramenter
 * @filename: char paramenter
 */

void check_read_err(int status, char *filename)
{
	if (status != -1)
	return;

	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}
/**
 * check_write_err - Write a program that copies the content of a file
 * to another file
 * @status: int
 * @filename: char
 */
void check_write_err(int status, char *filename)
{
	if (status != -1)
	return;

	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}
/**
 * close_fd - Write a program that copies the content of a file
 * to another file
 * @fd: int
 */
void close_fd(int fd)
{
	int close_stat;

	close_stat = close(fd);
	if (close_stat != -1)
	return;

	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - Write a program that copies the content of a file
 * to another file
 * @ac: int
 * @av: char
 * Return: 0
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	char *file_from, *file_to;
	char buff[1024];
	int buff_size = 1024;
	int curr_read = 0, curr_write = 0;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = av[1];
	file_to = av[2];
	fd_from = open(file_from, O_RDONLY);
	check_read_err(fd_from, file_from);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	check_write_err(fd_to, file_to);
	do {
		curr_read = read(fd_from, buff, buff_size);
		check_read_err(curr_read, file_from);
		if (curr_read == 0)
			break;
		curr_write = write(fd_to, buff, curr_read);
		check_write_err(curr_write, file_to);
	} while (curr_read > 0);
	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}
