
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -  function that frees dogs.
 * @d: pointer
 * Return: 0
 */
void free_dog(dog_t *d)
{
	dog_t *my_dog = d;

	if (d)
	{
		free(my_dog->name);
		free(my_dog->age);
		free(my_dog->owner);
	}
}
