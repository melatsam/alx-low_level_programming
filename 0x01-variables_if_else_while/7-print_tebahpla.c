#include <stdio.h>

/**
* main - prints out the alphabet in reverse
* without using any char variables
* Return: 0
*/
int main(void)
{
char a = 'z';

while (a >= 'a')
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
