#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

/**
 * handle_file_from - open the file to copy from.
 * @buff: the buff to read into
 * @av:  a the args vector or args list
 *
 * Return: the lenght of file read into buff
 */
int handle_file_from(char *buff, char **av)
{
int close_fd1, read_count, len = 0;
int fd1 = open(av[1], O_RDONLY);
read_count = read(fd1, buff, 1024);
if (fd1 < 0 || read_count < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
buff[read_count] = '\0';
while (buff[len] != '\0')
{
len++;
}
close_fd1 = close(fd1);
if (close_fd1 < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
exit(100);
}
return (len);
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
int fd2, wc, len, close_fd2;
char *buff;

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buff = malloc(1024 * sizeof(char));
if (buff == NULL)
{
exit(97);
}
len = handle_file_from(buff, av);
fd2 = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
wc = write(fd2, buff, len);
if (fd2 < 0 || wc < 0)
{
dprintf(STDERR_FILENO, "Can't write to %s\n", av[2]);
exit(99);
}
close_fd2 = close(fd2);
if (close_fd2 < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
exit(100);
}
free(buff);
return (0);
}
