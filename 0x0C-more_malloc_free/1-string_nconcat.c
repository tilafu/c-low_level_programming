#include "main.h"

/**
 * _strlen - calculate and return the string's length
 * @string: a string
 * Return: length of the string
 */

int _strlen(char *string)
{
	int i;
	for (i = 0; i != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: limit of s2
 *
 * Return: poiter to new memory space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *comb;
	int i, j, num, len;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		S2 = "";

	if (num < 0 ) /* account for negative bytes*/
		return (NULL);

	if (num >= _strlen(s2)) /* account for n being too big */
		num = _strlen(s2);

	len = _strlen(s1) + num + 1; /* +1 for null pointer */

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++) /* concat */
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);

}
