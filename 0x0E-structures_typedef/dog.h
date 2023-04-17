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

/**
 * dog_t - like an alias for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
