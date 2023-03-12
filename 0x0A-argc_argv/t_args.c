#include <stdio.h>
#include <stdlib.h>

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc -1);

	if (argc > 1)
		printf("%d\n", argc - 1);
	else printf("0\n");
	return (0);
}
