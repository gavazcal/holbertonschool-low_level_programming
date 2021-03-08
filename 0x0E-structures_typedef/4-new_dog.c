#include "dog.h"
#include <stdlib.h>

/**
 * stringlen - gets the length of a string
 * @s: the string
 * Return: 0
 */
int stringlen(char *s)
{
	int idx;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
	;
	}
	return (idx + 1);
}
/**
 * str_cpy - copies a string
 * @s: the string
 * Return: copied string
 */
char *str_cpy(char *s)
{
	int idx;
	int stringlen_2 = stringlen(s);
	char *new_str = malloc(stringlen_2);

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (idx = 0; idx < stringlen_2; idx++)
	{
		new_str[idx] = s[idx];
	}
	return (new_str);
}

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: null if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pupper;

	pupper = malloc(sizeof(dog_t));
	if (pupper == NULL)
	{
		return (NULL);
	}
	pupper->name = str_cpy(name);
	if (pupper->name == NULL)
	{
		free(pupper->name);
		free(pupper);
		return (NULL);
	}
	pupper->age = age;
	pupper->owner = str_cpy(owner);
	if (pupper->owner == NULL)
	{
		free(pupper->owner);
		free(pupper->name);
		free(pupper);
		return (NULL);
	}
	return (pupper);

}
