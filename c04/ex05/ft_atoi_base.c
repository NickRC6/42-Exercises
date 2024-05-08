#include <unistd.h>

// Function to check if a character is a valid digit in the given base
int is_valid_digit(char c, char *base) {
    while (*base) {
        if (*base == c)
            return 1;
        base++;
    }
    return 0;
}

// Function to convert a character to its integer value in the given base
int char_to_digit(char c, char *base) {
    int digit = 0;
    while (*base) {
        if (*base == c)
            return digit;
        digit++;
        base++;
    }
    return -1; // Invalid character
}

int ft_atoi_base(char *str, char *base) {
    // Check for invalid base
    if (!base || *base == '\0' || base[1] == '\0')
        return 0;

    // Check for invalid characters in base
    for (char *c = base; *c != '\0'; c++) {
        if (*c == '+' || *c == '-' || *c == ' ')
            return 0;
        for (char *d = c + 1; *d != '\0'; d++) {
            if (*c == *d)
                return 0;
        }
    }

    int result = 0;
    int sign = 1;
    int base_len = 0;
    int str_len = 0;

    // Calculate the length of the base
    while (base[base_len] != '\0')
        base_len++;

    // Calculate the length of the string
    while (str[str_len] != '\0')
        str_len++;

    // Check for leading sign
    if (str[0] == '-') {
        sign = -1;
        str++;
        str_len--;
    } else if (str[0] == '+') {
        str++;
        str_len--;
    }

    // Convert string to integer representation
    for (int i = 0; i < str_len; i++) {
        if (!is_valid_digit(str[i], base))
            return 0;
        result = result * base_len + char_to_digit(str[i], base);
    }

    return result * sign;
}
