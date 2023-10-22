#include "main.h"
/**
  *str_len - function to check the length of a string using recursion
  *@s: the string
  *Return: the string length
  */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + str_len(s + 1));
}
/**
  *check - checks whether the string is Symmetric or not
  *@s: the string
  *@start: iterator from the start
  *@end: iterator from the end
  *Return: 1 if yes, 0 if no
  */
int check(char *s, int start, int end)
{
	if (*(s + start) == *(s + end))
	{
		if (start == end || start == end + 1)
		{
			return (1);
		}
		else
		{
			return (0 + check(s, start + 1, end - 1));
		}
	}
	else
		return (0);
}
/**
  *is_palindrome - determines whether a string is palindrome or not
  *@s: the string
  *Return: 1 or 0
  */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check(s, 0, str_len(s) - 1));
}
