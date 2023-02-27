/**
 * strcpy - function prints string pointed to by src, 
 * including terminating null bye
 *
 * @dest: destination pointer
 * @src: initial pointer
 *
 * Return: poinetr to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src)
		*dest++ = *src++;
	return (tmp);
}

