#ifndef _DOG_H
#define _DOG_H

#include <stdio.h>
#include <stdlib.h>
/*PROTOTYPE*/
int _putchar(char c);
/*STRUCT*/
/**
 * struct dog - doggo struct
 * @name: doggo name
 * @age: doggo age
 * @owner: doggo hooman
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner
}dog_t;
/*PROTOTYPES*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, flat age, char *owner);
void free_dog(dog_t *d);



#endif
