#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - length of string
 * @str: string to be measured
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * _strcpy - copies string
 * @dest: buffer for storing copy
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
/**
 * *new_dog - creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dg = malloc(sizeof(dog_t));

	if (dg == NULL)
		return (NULL);

	dg->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}

	dg->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (dg->owner == NULL)
	{
		free(dg->name);
		free(dg);
		return (NULL);
	}

	dg->name = _strcpy(dg->name, name);
	dg->age = age;
	dg->owner = _strcpy(dg->owner, owner);

	return (dg);
}
