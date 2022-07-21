#include "main.h"
/**
 * substring_match - check to see if a substring after wildcard matches s1
 * @s1: one string
 * @s2: one string
 * @after_wldcd: placeholder for position after wildcard
 * Return: 1 for a match, 0 for none
 */

int substring_match(char *s1, char *s2, char *after_wldcd)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == '\0' && *s2 != '*')
		return (substring_match(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);

	if (*s2 == '*')
		return (substring_match(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (substring_match(s1 + 1, s2 + 1, after_wldcd));
	else
		return (substring_match(s1 + 1, after_wldcd, after_wldcd));
}

/**
 * wildcmp - compare string and wildcard
 * @s1: one strig
 * @s2: another string
 * Return: 1 for match, 0 for none
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (substring_match(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
