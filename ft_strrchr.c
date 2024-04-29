#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    // int i = 0;
    char *last;

    last = NULL;
    while (*s)
    {
        if (*s == c)
        {
            last = (char *)s;
            // i += 1;
        }
        s++;
    }
    if (c == '\0')
        return ((char *)s);
    return (last);
}

int main(void)
{
    char *p;
    char *s = "foobbbir";

    p = ft_strrchr(s, 'b');
    // p = strrchr(s, 'o');
    printf("%s\n", p);

}