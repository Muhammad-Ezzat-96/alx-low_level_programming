#ifndef dog_h
#define dog_h

/**
 * struct dog - structure
 * @name: input value
 * @age: input value
 * @owner: input value
 *
 * Description: structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - data type change
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
