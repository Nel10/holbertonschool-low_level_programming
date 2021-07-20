#ifndef STRUCT_DOG
#define STRUCT_DOG

/**
 * struct dog - new struct
 * @name: pointer
 * @age: variable
 * @owner: pointer
 * Return: 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
