/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nriera-c <nriera-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:05:06 by nriera-c          #+#    #+#             */
/*   Updated: 2024/04/30 17:05:08 by nriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int ft_str_is_alpha(char *str) 
{
    int i;
    int n;

    i = 0;
    n = 0;

    char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while(str[i] != '\0')
    {
        if(str[i] != alphabet[n]){
            n++; 
            if (alphabet[n] == '\0') 
                return 0; 
        }
        else if(str[i] == alphabet[n]){
            return 1; 
        }
    }
    return 1; 
}*/


int ft_str_is_alpha(char *str) 
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z')) {
            return 0; 
        }
        i++;
    }
    return 1; 
}
