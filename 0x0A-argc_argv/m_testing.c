#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
	int mult;
char c;
char d;

    printf("Enter a character: ");
    scanf("%c", &c);  
    scanf("%c", &d);
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);
   

	if (argc == 3)

		printf("%d\n", argc);
	
	if (argc < 3)
		printf("Error\n");
	return (0);
}
