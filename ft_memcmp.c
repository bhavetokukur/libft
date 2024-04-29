#include "libft.h"

int ft_memcmp(const void *b1, const void *b2, size_t len)
{
    unsigned char *p1;
    unsigned char *p2;

    p1 = (unsigned char *)b1;
    p2 = (unsigned char *)b2;
    while (len--)
    {
        if (*p1 != *p2)
            return (*p1 - *p2);
        p1++;
        p2++;
    }
    return (0);
}

// int main(void)
// {
//     int arr1[] = {1, 2, 3, 4};
//     int arr2[] = {1, 2, 3, 4, 5};

//     if (ft_memcmp(arr1, arr2, sizeof(arr2)) > 0)
//         printf("arr1 is greater than arr2\n");
//     else if (ft_memcmp(arr1, arr2, sizeof(arr2)) < 0)
//         printf("arr1 is less than arr2\n");
//     else
//         printf("arr1 is equal to arr2\n");

//     return (0);
// }