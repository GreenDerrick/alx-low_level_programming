#include <stdio.h>

int main()
{
	char *str;
	str = "Hello, Holberton";
	
	asm(
		"mov1 $4, %%eax\n"
		"mov1 $1, %%ebx\n"
		"movl $hello, %%ecx\n"
		"movl $5, %%edx\n"
		"int $0x80\n"
        	:
        	:
        	: "eax", "ebx", "ecx", "edx"

	);
	return 0;
}
