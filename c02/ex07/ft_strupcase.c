int ft_strupcase(char *str) 
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= '0' && str[i] <= '9')) {  //!!!! I need to create a function that replaces minus to mayus
            return 0; 
        }
        i++;
    }
    return 1; 
}