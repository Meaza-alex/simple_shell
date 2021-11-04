#include "shell.h"

/**
 * _strcat - concatenates two string in a path form
 * @s1: the first given destination
 * @s2: the second given source
 *
 * Return: (Success) to the newly string
 * ------- (Fail) if it failed
 */
char *_strcat(char *s1, char *s2)
{

          char *ptr;
          int len = _strlen(s1) + _strlen(s2);
          char *result = malloc((len + 2) * sizeof(char));
          ptr = result;
          if(result == NULL)
              return (NULL);
          if(s1 != NULL)
{
           while (*s1 != '\0')
              {
                   *ptr = *s1;
                   ptr++;
                   s1++;
               }
}
           *ptr = '/';
            ptr++;
            if (s2 != NULL)
{
            while (*s2 != '\0')
                {
                  *ptr = *s2;
                   ptr++;
                   s2++;
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
int len=0;

while(*str!='\0')
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
    while (*s1 != '\0' && *s2 != '\0')
    {
        if (*s1 != *s2)
        {
            cmp = *s1 - *s2;
            break;
        }
        s1++;
        s2++;
    }
    return (cmp);
}
/**
 * _strchr - locates a character in a given string
 * @str: the given string
 * @c: the given character.
 *
 * Return: (Success) a pointer to the first occurence of c
 * ------- (Fail) return a null pointer
 */
char *_strchr(char *str, char c)
{
    while (*str != '\0')
    {
        if (*str == c)
        {
            return (str);
                }
        str++;
    }
    return (NULL);
}
/**
 * _strdup - dupicates string on the dynamic memory.
 * @str1: the given string
 *
 * Return: (Success) a pointer to the duplicated string
 * ------- (Fail) return a null pointer
 */
char *_strdup(char *str1)
{
    int len = _strlen(str1);
    char *result = malloc(len + 1);
    char *ptr;
    if (result == NULL)
    {
        exit(EXIT_FAILURE);
    }
    ptr = result;
    while (*str1 != '\0')
    {
        *ptr = *str1;
        ptr++;
        str1++;
    }
    *ptr = '\0';
    return (result);
}
