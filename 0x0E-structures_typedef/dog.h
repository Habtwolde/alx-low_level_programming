#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_typedef - typedef for struct dog
 */
typedef struct dog dog_typedef;

/**
 * struct dog - struct named dog that stores the information of the dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_typdef *new_dog(char *name, float age, char *owner);
void free_dog(dog_typdef *d);

#endif
