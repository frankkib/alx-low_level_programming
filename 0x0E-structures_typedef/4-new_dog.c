#include "dog.h"
/**
 * _strcopy - function that copies a string
 * @dest: where the string is copied to
 * @src: where to copy the string from
 * Return: the string that has been copied
 */
char *_strcopy(char *dest, char *src)
{
	int ch = 0;

	for (ch = 0; src[ch]; ch++)
		dest[ch] = src[ch];
	dest[ch] = '\0';
	return (dest);
}
/**
 * _strlen - function that prints the length of a string
 * @str: the string to be checked for len
 * Return: the length
 */
int _strlen(char *str)
{
	int length = 0;

	while (str)
		length++;
	return (length);
}
/**
 * new_dog - function that creates a new dog struct
 * @name: the new name for the dog
 * @age: the new age for the dog
 * @owner: the new owner for the dog
 *
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doggy = NULL;
	int num;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doggy = malloc(sizeof(struct dog));

	if (doggy == NULL)
		return (NULL);
	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggy->name == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy->owner);
		free(doggy);
		return (NULL);
	}
	for (num = 0;  num <= _strlen(name); num++)
		doggy->name[num] =  name[num];
	doggy->age = age;
	for (num = 0; num <= _strlen(owner); num++)
		doggy->owner[num] = owner[num];
	return (doggy);
}
