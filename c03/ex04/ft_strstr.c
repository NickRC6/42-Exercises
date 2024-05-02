/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriera-c <nriera-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:50:39 by nriera-c          #+#    #+#             */
/*   Updated: 2024/05/02 18:50:41 by nriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define MAX_SUBSTRING_LENGTH 100

char *ft_strstr(char *str, char *to_find){
    int i;
    static char needle[MAX_SUBSTRING_LENGTH + 1];

    i = 0;
    while (str[i] != '\0')
	{
        if (str[i] == to_find[i])
        {
            needle[i] = to_find[i];
        }
		i++;
	}
    return needle;
}