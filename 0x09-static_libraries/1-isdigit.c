#include "main.h"

/**
 * _isdigit - Check Description
 *
 * @c: input takes
 * Description: functions checks if input is a digit
 * or not
 *
 * Return: 1 if digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
