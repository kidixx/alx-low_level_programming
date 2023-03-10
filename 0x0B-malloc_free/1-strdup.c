#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that rturn a pointer to a string
 * @str: the string to be copied.
 *
 * Return: return NULL if insufficient memory
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int strlen;
	char *cpy_str;

	if (str == NULL)
		return (NULL);

	for (strlen = 0; str[strlen] != '\0'; strlen++)
		;

	cpy_str = malloc((strlen + 1) * sizeof(char));

	if (cpy_str == NULL)
		return (NULL);

	for (i = 0; i < strlen; i++)
	{
		cpy_str[i] = str[i];
	}

	cpy_str[strlen] = '\0';

	return (cpy_str);
}
