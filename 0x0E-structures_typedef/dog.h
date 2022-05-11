#ifndef DOG_H
#define DOG_H
/**
 * struct dog - data for a dog breed
 * @name: name of the dog
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
