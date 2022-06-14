	#include <stdio.h>
	#include <stdlib.h>
	#include <unistd.h>

	void ft_print_alphabet(char* abcdefghijklmnopqrstuvwxyz);
	
	void ft_print_alphabet(char* abcdefghijklmnopqrstuvwxyz)
	{
		write(1, abcdefghijklmnopqrstuvwxyz, 26);
	}

	int main(int argc, char* argv[])
	{
		ft_print_alphabet("abcdefghijklmnopqrstuvwxyz");
		
		return 0;
	}




