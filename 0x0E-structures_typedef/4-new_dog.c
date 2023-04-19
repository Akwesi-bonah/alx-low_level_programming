#include "dog.h"
#include "stdlib.h"

/**
 * _strlen - length of a string
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - create new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog name
 *
 * Return: dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	if (name == NULL || owner == NULL)
		return (NULL);

	puppy = malloc(sizeof(dog_t));

	if (puppy == NULL)
		return (NULL);

	puppy->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}

	puppy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (puppy->owner == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}

	puppy->name = _strcpy(puppy->name, name);
	puppy->owner = _strcpy(puppy->owner, owner);
	puppy->age = age;

	return (puppy);
}
