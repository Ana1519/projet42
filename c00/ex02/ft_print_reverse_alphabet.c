	#include <stdio.h>
	#include <stdlib.h>
	#include <unistd.h>

	void ft_print_reverse_alphabet(char* abc);

	void ft_print_reverse_alphabet(char* abc)
	{
		write(1, abc, 26);
	}
	
	int main(int argc, char* argv[])
	{
		ft_print_reverse_alphabet("zyxwvutsrqponmlkjihgfedcba");

		return 0;
	}

