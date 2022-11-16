#include "dog.h"
/**
 * print_dog -  function that prints the structure of a dog.
 * @d: this is the pointer.
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	if (d->name == NULL)
		printf("Name:%s\n(nil)");
	 
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
