#ifndef DOG_H
#define DOG_H

struct dog
{
    char *name;
    float age;
    char *owner;
};

/* CETTE LIGNE EST CRUCIALE */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
