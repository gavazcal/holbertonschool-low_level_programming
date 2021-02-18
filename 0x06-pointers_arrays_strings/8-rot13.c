#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 * @s: the string
 * Return: s
 */
char *rot13(char *s)
{
	int counter_1, counter_2;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (counter_1 = 0; s[counter_1] != '\0'; counter_1++)
	{
		for (counter_2 = 0; input[counter_2] != '\0'; counter_2++)
		{
			if (s[counter_1] == input[counter_2])
			{
				s[counter_1] = output[counter_2];
				break;
			}
		}
	}
	return (s);
}
