#include "variadic_functions.h"

/**
*print_numbers - prints numbers, followed by a new line
*@separator: separator string
*@n: number of arguments
*/
void print_numbers(const char *separetor, const unsigned int n, ...)
{
register unsigned int i;
va_list n1;

va_start(n1, n);
for (i=0; < n; i++)
printf("%i%s", va_arg(n1, int), (separator && i !=n - 1) ? separator : "");
va_end(n1);
printf("/n");

}
