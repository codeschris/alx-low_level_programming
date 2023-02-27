/**
 * _strcpy - function prints string pointed to by src,
 * including terminating null byte, to the buffer pointed
 * to by dest
 *
 * @dest: destination pointer
 * @src: initial pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src)
		*dest++ = *src++;
	return (tmp);
}

