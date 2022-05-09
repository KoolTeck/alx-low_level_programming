#include <stdio.h>
#include <stdlib.h>
/**
 * filter_arr - fillters an arr of words on null.
 * @arr: The arr to filter.
 * @str_len: the length of the str
 *
 * Return: a pointer to the new arr;
 */
char **filter_arr(char **arr, int str_len)
{
int i, arr_len = 0;
char *s;
for (i = 0; i < str_len; i++)
{
s = arr[i];
if (s[0] == 0 || s[0] == 1)
{
continue;
}
arr[arr_len] = s;
arr_len++;
}
arr[arr_len] = '\0';
return (arr);
}

/**
 * fill_buffer - fills buffer with arr of words.
 * @buffer: The buffer to fill
 * @str: the string to fill.
 * @str_len: the length of the str
 *
 * Return: a pointer to the buffer;
 */
char **fill_buffer(char **buffer, char *str, int str_len)
{
int i, j, count = 0, row_c;
j = 0;
row_c = 0;
for (i = 0; i < str_len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
buffer[row_c][j] = '\0';
row_c++;
j = 0;
}
else
{
buffer[row_c][j] = str[i];
j++;
count++;
}
}
if (count == 0)
{
return (NULL);
}
return (buffer);
}

/**
 * get_len - set the length  of a string
 * @str: The string to check
 *
 * Return: the length of the str.
 */
int get_len(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{

}
return (i);
}
/**
 * strtow - converts a str to an arr of words.
 * @str: The string to convert.
 *
 * Return: a pointer to the new arr.
 */
char **strtow(char *str)
{
int i, size, str_len = 0;
char **stw;
if (str == NULL || str[str_len] == '\0')
{
return (NULL);
}
str_len += get_len(str);
size = str_len *sizeof(char *);
stw = malloc(size);
if (stw == NULL)
{
return (NULL);
}
for (i = 0; i < str_len; i++)
{
stw[i] = malloc(str_len *sizeof(char));
if (stw[i] == NULL)
{
while (i >= 0)
{
free(stw[i]);
i--;
}
free(stw);
return (NULL);
}
}
stw = fill_buffer(stw, str, str_len);
if (stw == NULL)
{
return (NULL);
}
stw = filter_arr(stw, str_len);
return (stw);
}
