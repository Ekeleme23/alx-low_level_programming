#ifndef MAIN_H
#define MAIN_H

/**
* struct dog - A struct to represent a dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*/

struct dog
{

char *name;
float age;
char *owner;

};

/**
* dog_t - typedef for struct dog
*/
	typedef struct dog dog_t;

	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);
	char *_strcpy(char *dest, char *src);
	int _strlen(char *s);


#endif
