#include "libft.h"
#include "ft_strlen.c"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    char *sub;

    i = 0;
    sub = (char *)malloc((len + 1) * sizeof(char));
    if (!sub)
        return (NULL);
    while (len)
    {
        sub[i] = s[start];
        i++;
        start++;
        len--;
    }
    sub[i] = '\0';
    return (sub);
}
