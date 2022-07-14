#include <unistd.h>

void ft_print_comb(void);

void ft_putchar(char c) 
{
	write(1, &c, 1); 
}

void ft_print_comb(void)
{
	char hundred, decade, unit;

	hundred = '0';

	decade = '0';

	unit = '0';	

	while(hundred <= '7')
	{
	
		while(decade <= '8')
		{
			while(unit <= '9')
			{
			if(hundred != decade && decade != unit && hundred != unit)
			{
			ft_putchar(hundred);
			ft_putchar(decade);
			ft_putchar(unit);
			
			if(hundred == '7' && decade == '8' && unit == '9')
			{
			break;
			}
			else
			{ 
			ft_putchar(',');
			ft_putchar(' ');
			} 
			}
			unit++;
			}
		
		unit = '0';	
		decade++;
		}
	decade = '0';
	hundred++;
	}
		

}		
