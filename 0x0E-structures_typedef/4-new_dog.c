#include <stdlib.h>
#include "dog.h"

/**
 * _strlen -This function will  return length of s
 * @s: string
 *
 * Return:length of the string
 */


int _strlen(char *s)
{
	int e = 0;

	while (s[e] != '\0')
	{
		e++;
	}

	return (e);
}

/**
 * *_strcpy - copies the string
 * to the buffer pointed to by dest
 * @dest: destination
 * @src: source
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int erick = 0, e;

	while (src[erick] != '\0')
	{
		erick++;
	}

	for (e = 0; e < erick; e++)
	{
		dest[e] = src[e];
	}
	dest[e] = '\0';

	return (dest);
}

/**
 * new_dog - creates a dog
 * @name: name of it
 * @age: age of the dog
 * @owner: owner of it
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int erick1, erick2;

	erick1 = _strlen(name);
	erick2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (erick1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (erick2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
