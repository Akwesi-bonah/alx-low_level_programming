#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a type describing a dog
 * @age: age of the dog
 * @name: name of the dog
 * @owner: owner of the dog's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - struct of new dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
