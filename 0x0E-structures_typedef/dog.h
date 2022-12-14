#ifndef DOGSTR_H
#define DOGSTR_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - the structure of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);


#endif
