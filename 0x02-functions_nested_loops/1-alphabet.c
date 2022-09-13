#include "main.h"
/**
* print_alphabet - prints the alphabet, in lowercase, followed by a new line
*/
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet()
{
char ch;
ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
}
