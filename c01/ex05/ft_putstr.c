#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int i;
	i = 0;
	if(str == NULL)
	{
		return;
	}
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
