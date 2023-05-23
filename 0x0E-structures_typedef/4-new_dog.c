#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
	i++;
}
return (i);
}
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int len, i;
len = 0;
while (src[len] != '\0')
{
	len++;
}
for (i = 0; i < len; i++)
{
	dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

/**
 * *new_dog - initialize a variable of type struct dog
 * @name:  name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *myDog;
int lengthName, lengthOwner;

myDog = malloc(sizeof(dog_t));
if (myDog == NULL)
{
	return (NULL);
}
lengthName = _strlen(name);
myDog->name = malloc(sizeof(char) * (lengthName + 1));
if (myDog->name == NULL)
{
	free(myDog);
	return (NULL);
}
lengthOwner = _strlen(owner);
myDog->owner = malloc(sizeof(char) * (lengthOwner + 1));
if (myDog->owner == NULL)
{
	free(myDog);
	free(myDog->name);
	return (NULL);
}
_strcpy(myDog->name, name);
_strcpy(myDog->owner, owner);
myDog->age = age;
return (myDog);

}
