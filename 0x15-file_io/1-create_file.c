#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - function creates a file
 *
 * @filename: name of file to be created
 * @text_content: str to write to file
 *
 * Return: 1 Success, -1 when file cannot be written or created
 */

int create_file(const char *filename, char *text_content)
{
	int of, wf, n = 0;

	if (filename == NULL)
		return (-1);

	of = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (of < 0)
		return (-1);

	while (text_content && *(text_content + n))
		n++;
	wf = write(of, text_content, n);
	close(of);
	if (wf < 0)
		return (-1);
	return (1);
}
