#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that prints a pointer to  newly allocated space memory
 * @str: char
 * Return: Always 0 Succesful
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];

	return (aaa);
}
