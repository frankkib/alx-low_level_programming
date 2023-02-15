#include "dog.h"
/**
 * print_dog -  function that prints the structure of a dog.
 * @d: this is the pointer.
 * Return: void.
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
		printf("Name:\n(nil)");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0)
		printf("Age:\n(nil)");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
