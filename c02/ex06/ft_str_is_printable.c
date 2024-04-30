int  ft_str_is_printable(char *str) 
{
    int i;
    int n;

    i = 0;
    n = 0;

    char alphabet[] = "-_0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

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
}