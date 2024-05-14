/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriera-c <nriera-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:53:03 by nriera-c          #+#    #+#             */
/*   Updated: 2024/05/13 17:53:25 by nriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_params(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	j;

	j = argc - 1;
	if (argc < 1)
	{
		return (0);
	}
	while (j > 0)
	{
		ft_rev_params(argv[j]);
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
