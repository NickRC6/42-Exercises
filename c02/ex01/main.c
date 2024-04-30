#include <stdio.h>
#include "ft_strncpy.c"

int main() {

    char src[] = "Copy this string";
    char dest[20];
    int x;
    x = 7;

    ft_strncpy(dest, src, x);
    printf("Copied string: %s\n", dest);
    return 0;
}