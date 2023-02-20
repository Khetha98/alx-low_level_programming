#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * */
int main(void)
{
char ch = 'a';
char cha = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}

while (cha <= 'z')
{
putchar(toupper(cha));
cha++;
}
putchar('\n');

return (0);
}
