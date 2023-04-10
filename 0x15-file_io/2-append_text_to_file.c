#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * append_text_to_file - function appends text to a file
 *
 * @filename: name of file being modified
 * @text_content: string to be added
 *
 * Return: 1 Success, -1 if file cannot be modified
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int of, wf, n = 0;

	if (filename == NULL)
		return (-1);

	of = open(filename, O_RDWR | O_APPEND);
	if (of < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(of);
		return (1);
	}

	while (*(text_content + n))
		n++;

	wf = write(of, text_content, n);
	close(of);
	if (wf < 0)
		return (-1);

	return (1);
}
