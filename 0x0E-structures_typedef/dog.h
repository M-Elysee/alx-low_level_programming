#ifndef STRUCT_DOG
#define STRUCT_DOG
/**
* struct dog - alows to input multiple dog characteristics
* @name: points to the dogs name
* @age: is the ageof the dog
* @owner: points to the owner of the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
