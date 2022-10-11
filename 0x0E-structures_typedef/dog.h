#ifndef STRTYP
#define STRTYP

/**
 * struct dog - structure of a dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of the dog.
 */
struct dog
{
	char *poppy;
	float age;
	char *owner;
};

typedef struct dog dog-t;

void init_dog(struct dog *d, char *poppy, float age, char *owner);
void print_dog(struct dog *d);
dog-t *new_dog(char *poppy, float age, char *owner);
void free_dog(dog_t *d);

#endif /*STRTYP*/
