#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c);

void ft_putchar(char c)
{
write (1, &c, 1);
}

int main(int argc, char* argv[])
{
ft_putchar('J');

return 0;
}
gcc ft_putchar.c
./a.out


