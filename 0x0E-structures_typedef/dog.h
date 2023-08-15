#ifndef ERICK_H
#define ERICK_H

/**
 *struct dog - a dog's infomation
 *@name:Imput nsme
 *@age: Input age og the dog
 *@owner: Input owner of the dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for the struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
