#ifndef _DOG_
#define _DOG_
#include <stdio.h>

/**
 * struct dog - dog infos
 * @name: name
 * @age: age
 * @owner: owner
 * Description: dog data
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
