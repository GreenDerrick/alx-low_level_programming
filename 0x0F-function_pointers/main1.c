#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

void print(int elem)
{
	printf("%d\n", elem);
}

int main(void)
{
	//int array[5] = {10, 20, 31, 42, 53};
	//array_iterator(array, 4, &print);
	int arr[5] = {0, 98, 402, 1024, 4096};
	array_iterator(arr, 5, &print);
	return (0);
}
