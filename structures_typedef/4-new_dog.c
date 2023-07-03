#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *s2, char *s1);

/**
 * new_dog - Creates a new dog_t
 * @name: Name for new dog
 * @age: Age of dog
 * @owner: Owmer of dog
 * Return: Memory of new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Jeff;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	Jeff = malloc(sizeof(dog_t));
	if (Jeff == NULL)
	{
		return (NULL);
	}

	Jeff->name = malloc(_strlen(name) + 1);
	if (Jeff->name == NULL)
	{
		free(Jeff);
		return (NULL);
	}
	Jeff->name = _strcpy(Jeff->name, name);

	Jeff->age = age;

	Jeff->owner = malloc(_strlen(owner) + 1);
	if (Jeff->owner == NULL)
	{
		free(Jeff->name);
		free(Jeff);
		return (NULL);
	}
	Jeff->owner = _strcpy(Jeff->owner, owner);
	return (Jeff);
}
/**
 * _strlen - Captures the length of a string
 * @s: The string
 * Return: The length
 */
int _strlen(char *s)
{
	int sc = 0;

	for (sc = 0; s[sc]; sc++)
		;
	return (sc);
}
/**
 * _strcpy - Copies a string into another area
 * @s1: The copy name
 * @s2: Location of copy
 * Return: Pointer to copied string
 */
char *_strcpy(char *s2, char *s1)
{
	int sc = 0;

	for (sc = 0; s1[sc]; sc++)
	{	s2[sc] = s1[sc];
	}
	s2[sc] = '\0';
	return (s2);
}
