#include "dog.h"
/**
 * init_dog - function that  prints the structure of a dog
 * @d: pointer to the structure
 * @name: dogs name
 * @age: the dogs age
 * @owner: the dogs owner
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
