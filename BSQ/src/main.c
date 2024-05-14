#include <stdio.h>

int	main(int agc, char **agv)
{
    	if (agc > 2)
		print_error(TOO_MANY_ARG);
}