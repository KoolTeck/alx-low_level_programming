#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

/**
 * close_error - prints error when file did not close
 * @message: the error message
 * @fd_val:  the fd value
 * @exit_code: the error exit code
 *
 * Return: the lenght of file read into buff
 */
void close_error(char *message, int fd_val, int exit_code)
{
dprintf(STDERR_FILENO, message, fd_val);
exit(exit_code);
}

/**
 * open_write_error - prints error when file opening or writting fails
 * @message: the error message
 * @file_name:  the file name argument
 * @exit_code: the error exit code
 *
 * Return: the lenght of file read into buff
 */
void open_write_error(char *message, char *file_name, int exit_code)
{
dprintf(STDERR_FILENO, message, file_name);
exit(exit_code);
}


/**
 * main - copies the content of a file to another file.
 * @ac: the args count
 * @av:  a the args vector or args list
 *
 * Return: 0 on succes or set error num on error
 */
int main(int ac, char **av)
{
int fd1, fd2;
ssize_t write_count, read_count;
char buff[1024];

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd1 = open(av[1], O_RDONLY);
if (fd1 == -1)
open_write_error("Error: Can't read from file %s\n", av[1], 98);
fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd2 == -1)
open_write_error("Error: Can't write to %s\n", av[2], 99);
while ((read_count = read(fd1, buff, 1024)) > 0)
{
write_count = write(fd2, buff, read_count);
if (write_count == -1)
open_write_error("Error: Can't write to %s\n", av[2], 99);
}
if (read_count == -1)
open_write_error("Error: Can't read from file %s\n", av[1], 98);
if (close(fd1) == -1)
close_error("Error: Can't close fd %d\n", fd1, 100);
if (close(fd2) == -1)
close_error("Error: Can't close fd %d\n", fd2, 100);
return (0);
}
