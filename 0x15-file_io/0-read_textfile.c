#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - function reads a text file and prints
 * to POSIX STDOUT
 *
 * @filename: name of file to be opened
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int of, rf, wf;
	char *tmp;

	if (filename == NULL)
		return (0);

	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
		return (0);

	of = open(filename, O_RDONLY);
	if (of < 0)
	{
		free(tmp);
		return (0);
	}

	rf = read(of, tmp, letters);
	if (rf < 0)
	{
		free(tmp);
		return (0);
	}

	wf = write(STDOUT_FILENO, tmp, rf);
	free(tmp);
	close(of);

	if (wf < 0)
		return (0);
	return ((ssize_t)wf);
}
