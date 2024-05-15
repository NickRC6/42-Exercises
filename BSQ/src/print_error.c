#include "../includes/BSQ.h"

int	print_error(int error)
{
    if (error == 1)
		ft_putstr("File error\n");
	else if (error == 2)
		ft_putstr("Memory error\n");
	else if (error == 3)
		ft_putstr("Map error\n");
    else if (error == 4)
        ft_putstr("Program usage: ./bsq <input_file>\n");
	return (error);
}
