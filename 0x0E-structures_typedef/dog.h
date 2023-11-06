#ifndef DOG_H
#define DOG_H
/*
 * struct dog - dog's basic information
 * @name - char which is dog's name
 * @age - char which is dog's age
 * @owner - char which is dog's owner
 */
typedef struct dog dog_t;
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
