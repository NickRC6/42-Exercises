#include <unistd.h>

void ft_putchar(char q) 
{
	write(1, &q, 1); 
}

