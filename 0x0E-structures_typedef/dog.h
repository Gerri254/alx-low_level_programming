#ifndef DOG_H
#define DOG_H
/**
 * struct dog - description of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Description: a struct for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);

#endif
