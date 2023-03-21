#include <stdio.h>
#include "dog.h"
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{

    init_dog(&d, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
