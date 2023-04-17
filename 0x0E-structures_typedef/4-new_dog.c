#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * new_dog - function that create a dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: d
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	(*d).name = malloc(_strlen(name) + 1);
	(*d).owner = malloc(_strlen(owner) + 1);

	if (d->name == NULL || d->owner ==  NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	d->name = _strcpy(d->name, name);
	d->owner = _strcpy(d->owner,  owner);
	d->age = age;

	return (d);
}


/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}


/**
 * _strlen - count number of string
 * @s: arg
 * Return: len
 **/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}


