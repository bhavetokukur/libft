#include "libft.h"
#include "ft_bzero.c"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *p;

    if (nmemb == 0 || size == 0)
    {
        nmemb = 1;
        size = 1;
    }
    p = malloc(nmemb * size);
    if (p == NULL)
        return (NULL);
    else
        ft_bzero(p, nmemb * size);
    return (p);
}

int main()
{
    int *p = (int *)ft_calloc(6, sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", p[i]);
    }
    return 0;
}