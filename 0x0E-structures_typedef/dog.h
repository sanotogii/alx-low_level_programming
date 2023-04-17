#ifndef DOG
#define DOG


/**
 * struct dog - dog data
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

#endif
