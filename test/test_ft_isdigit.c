#include <stdio.h>
#include "ft_isdigit.c"

int main()
{
    // Test cases for digits
    printf("%d\n", ft_isdigit('0')); // Expected output: 1
    printf("%d\n", ft_isdigit('5')); // Expected output: 1
    printf("%d\n", ft_isdigit('9')); // Expected output: 1

    // Test cases for non-digits
    printf("%d\n", ft_isdigit('a')); // Expected output: 0
    printf("%d\n", ft_isdigit('Z')); // Expected output: 0
    printf("%d\n", ft_isdigit('$')); // Expected output: 0

    return 0;
}