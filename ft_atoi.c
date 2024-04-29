
#include "libft.h"

int atoi(const char *nptr)
{
    int sign;
    int res;

    sign = 1;
    res = 0;
    while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
        nptr++;
    if (*nptr == '-' || *nptr == '+')
    {
        if (*nptr == '-')
            sign = -1;
        nptr++;
    }
    while (*nptr >= '0' && *nptr <= '9')
    {
        res = res * 10 + *nptr - '0';
        nptr++;
    }
    return (res * sign);
}
