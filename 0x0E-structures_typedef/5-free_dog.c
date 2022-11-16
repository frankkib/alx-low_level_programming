#include "dog.h"
/**
 * free_dog - function that fress the dog
 * @d: the pointer
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
