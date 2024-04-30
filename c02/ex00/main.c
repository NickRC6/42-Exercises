#include <stdio.h>
#include "ft_strcpy.c"

int main() {

    char src[] = "Copy this string";
    char dest[20];

    ft_strcpy(dest, src);
    printf("Copied string: %s\n", dest);
    return 0;
}