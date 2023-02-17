#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: 0 (Always)
 */
int main(void){

	long numero;
	
	for (numero = 0; numero < 10; numero++)
	{
		putchar((numero%10) + '0');
	}
	putchar('\n');
	return (0);
}
