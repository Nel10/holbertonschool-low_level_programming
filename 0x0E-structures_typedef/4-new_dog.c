#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -  function that creates a new dog.
 * @name: pointer
 * @age: variable
 * @owner: pointer
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *perrito;
	char *copyname, *copyowner;
	int x = 0, y = 0, z;

	perrito = malloc(sizeof(struct dog));
	if (perrito == NULL)
		return (NULL);
	while (*(name + x) != '\0')
		x++;
	while (*(owner + y) != '\0')
		y++;
	copyname = malloc(sizeof(char) * (x + 1));
	if (copyname == NULL)
	{
		free(perrito);
		return (NULL);
	}
	copyowner = malloc(sizeof(char) * (y + 1));
	if (copyowner == NULL)
	{
		free(copyname);
		free(perrito);
		return (NULL);
	}
	for (z = 0; z <= x; z++)
	{
		(copyname + z) = *(name + z);
	}
	for (z = 0; z <= y; z++)
	{
		*(copyowner + z) = *(owner + z);
	}
	perrito->name = copyname;
	perrito->age = age;
	perrito->owner = copyowner;
	return (perrito);
}
