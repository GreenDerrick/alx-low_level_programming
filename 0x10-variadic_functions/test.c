#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i = 0;
    int number;

    va_list print;

    va_start(print, n);

    while (i < n)
    {
        number = va_arg(print, int);
        if (separator == NULL)
        {
            separator = "";
            printf("%d", number);
        }
        else
        {
            printf("%d%s", number, separator);
        }
        i++;
    }

    printf("\n");
    va_end(print);
}

int main(void)
{
    print_numbers(",", 4, 3, 4, 5, 6);
    return 0;
}
