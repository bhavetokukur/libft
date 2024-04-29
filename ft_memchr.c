#include "libft.h"

char *ft_memchr(const void *b, int c, size_t len)
{
    unsigned char *p;
    unsigned char ch;

    p = (unsigned char *)b;
    ch = (unsigned char)c;
    while (len--)
    {
        if (*p == ch)
            return ((char *)p);
        p++;
    }
    return (NULL);
}

int main () {
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}