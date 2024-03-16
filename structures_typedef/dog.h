#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure represen
 * ting information about a dog
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (string)
 *
 * Description: This structure stores information
 * about a dog including its name,
 * age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
