#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a block of memory
 * Description: a block of memeory holding the following elements
 * @name: a string
 * @age: an integer
 * @owner: a string
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
