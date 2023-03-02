#include "main.h"
/**
 * _strcmp - compares string
 * @s1: input parameter
 * @s2: input parameter
 *
 * Return: 0 if equal or x is differeent
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int x = 0;

	while (s1[a] != '\0' && x == 0)
	{
		x = s1[a] - s2[a];
		a++;
	}
	return (x);

}
