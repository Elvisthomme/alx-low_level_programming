#include "main.h"

/**
  * wildtest - test two string taking joker (*) in consideration
  * @s1: the first string
  * @s2: the string after the joker
  * @p1: the pointer to string before the test with the joker
  * @p2: the pointer to the joker
  * Return: 1 if the can be considered identical, otherwise return 0
  */
int wildtest(char *s1, char *s2, char *p1, char *p2)
{
	if (*s2 == '*')
		return (wildcmp(s1, s2));
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildtest(s1 + 1, s2 + 1, p1, p2));
	}
	if (*s1 == '\0')
		return (wildcmp(p1, p2 + 1));
	if (*s2 == '\0')
		return (0);
	return (wildtest(s1 + 1, s2, p1, p2));
}

/**
  * wildcmp - compare two strings
  * @s1: the first string
  * @s2: the second string
  * Return: 1 if the can be considered identical, otherwise return 0
  */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);
	if (*s2 != '*' && *s2 != '\0' && *s1 == '\0')
		return (0);
	if (*s2 == '\0' && *s1 != '\0')
		return (0);
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*' && *(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s1 != *s2 && *s2 != '*')
		return (0);
	if (*s2 == '*')
	{
		if (*s1 == '\0' && *(s2 + 1) != '\0')
			return (0);
		return (wildtest(s1, s2 + 1, s1, s2));
	}
	return (0);
}
