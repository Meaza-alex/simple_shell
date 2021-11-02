#include "shell.h"

/**
 * _strcat - concatenates two string in a path form
 * @first: the first given destination
 * @second: the second given source
 *
 * Return: (Success) to the newly string
 * ------- (Fail) if it failed
 */
char *_strcat(char *str1, char *str2)
{
	int len = _strlen(str2) + _strlen(str2);
	char *result;
	result = malloc((len + 2) * sizeof(char));
	if (result==NULL)
		perror("malloc failed\n");
	char *ptr = result;

	if (str1 != NULL)
	{
		while (*str1 != '\0')
		{
			*ptr = *str1;
			ptr++;
			str1++;
		}
	}
	*ptr = '/';
	ptr++;

	if (str2 != NULL)
	{
		while (*str2!= '\0')
		{
			*ptr = *str2;
			ptr++;
			str2++;
		}
	}

	*ptr = '\0';

	return (result);
}
/**
 * _strlen - finds the length of a given string
 * @str: the given string
 *
 * Return: (Success) the length of the string
 * ------- (Fail) negative value
 */
int _strlen(char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}
/**
 * _strcmp - compare two strings
 * @s1: the first given string
 * @s2: the second given string
 *
 * Return: (Success) a positive number
 * ------- (Fail) a negative number
 */
int _strcmp(char *s1, char *s2)
{
	int cmp = 0, i;

	if (s1 == NULL || s2 == NULL)
		return (1);
	for (i = 0; s1[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			cmp = s1[i] - s2[i];
			break;
		}
		else
			continue;
	}
	return (cmp);
}
/**
 * _strchr - locates a character in a given string
 * @str: the given string
 * @c: the given string
 *
 * Return: (Success) a pointer to the first occurence of c
 * ------- (Fail) return a null pointer
 */
char *_strchr(char *str, char c)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (ptr = str; *ptr; ptr++)
		if (*ptr == c)
			return (ptr);
	return (NULL);
}
/**
 * _strdup - dupicates string
 * @str: the given string
 *
 * Return: (Success) a pointer to the duplicated string
 * ------- (Fail) return a null pointer
 */
char *_strdup(char *str)
{
	char *dupl;

	if (str == NULL)
		return (NULL);
	dupl = malloc(_strlen(str) + 1);
	if (dupl == NULL)
		return (NULL);
	_strcpy(dupl, str);
	return (dupl);

}
/**
 * _strcpy - copie a string from source to destination
 * @source: the string source
 * @dest: the string destination
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *source)
{
	int i;

	for (i = 0; source[i] != '\0'; i++)
	{
		dest[i] = source[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _isalpha - check if the input is a letter
 * @c: the character to be checked
 *
 * Return: 1 if letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (SUCCESS);
	}
	return (FAIL);
}
