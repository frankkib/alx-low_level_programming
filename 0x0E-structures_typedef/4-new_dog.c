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
	dog_t *new_dog_t;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	new_dog_t = malloc(sizeof(dog_t));
	if (new_dog_t == NULL)
		return (NULL);
	new_dog_t->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_dog_t->name == NULL)
	{
		free(new_dog_t);
		return (NULL);
	}
	new_dog_t->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dog_t->owner == NULL)
	{
		free(new_dog_t->name);
		free(new_dog_t);
		return (NULL);
	}
	new_dog_t->name = _strcopy(new_dog_t->name, name);
	new_dog_t->age = age;
	new_dog_t->owner = _strcopy(new_dog_t->owner, owner);
	return (new_dog_t);
}
