#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *home, char *res);

/**
 *  * new_dog - ...
 *   * @name: ...
 *    * @age: ...
 *     * @owner: ...
 *      *
 *       * Return: ...
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dag;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		dag = malloc(sizeof(dog_t));

		if (dag == NULL)
			return (NULL);

		dag->name = malloc(sizeof(char) * name_l);

		if (dag->name == NULL)
		{
			free(dag);
			return (NULL);
		}

		dag->owner = malloc(sizeof(char) * own_l);

		if (dag->owner == NULL)
		{
			free(dag->name);
			free(dag);
			return (NULL);
		}

		dag->name = _strcpy(dag->name, name);
		dag->owner = _strcpy(dag->owner, owner);
		dag->age = age;
	}

	return (dag);
}

/**
 *  * _strlen - Returns the length of a string
 *   * @s: String to count
 *    *
 *     * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 *  * _strcpy - Copy a string
 *   * @home: home value
 *    * @res: Source value
 *     *
 *      * Return: the pointer to home
 */
char *_strcpy(char *home, char *res)
{
	int i;

	for (i = 0; res[i] != '\0'; i++)
	{
		home[i] = res[i];
	}

	home[i++] = '\0';

	return (home);
}
