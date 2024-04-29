#include "libft.h"
#include "ft_strlen.c"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;

    str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if(!str)
    {
        printf("Error: malloc failed\n");
        return (NULL);
    }
    while (*s1 != '\0')
    {
        *str = *(char *)s1;
        str++;
        s1++;
    }
    printf("str: %s\n", str);
    while (*s2 != '\0')
    {
        *str++ = *s2++;
    }
    *str = '\0';
    return (str);
}

int main(void)
{
    char *s1 = "Hello";
    char *s2 = "World";
    char *s3 = ft_strjoin(s1, s2);
    printf("%s", s3);
    return (0);
}