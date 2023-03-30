#include "main.h"

/**
 * leet - encodes a string to 1337(leet)
 * @s: string to be encoded
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		char c = s[i];
		int a = (s[i] == 'a' || s[i] == 'A');
		int e = (s[i] == 'e' || s[i] == 'E');
		int o = (s[i] == 'o' || s[i] == 'O');
		int t = (s[i] == 't' || s[i] == 'T');
		int l = (s[i] == 'l' || s[i] == 'L');

		s[i] = (a * '4') + (e * '3') + (o * '0') +
			(t * '7') + (l * '1') +
			c * (!a * !e * !o * !t * !l);;
	}

	return (s);
}
