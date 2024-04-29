
#include "libft.h"
#include "ft_strlen.c"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t len_dst;
    size_t len_src;

    i = 0;
    j = 0;
    len_dst = ft_strlen(dst);
    len_src = ft_strlen(src);
    if (dstsize == 0)
        return (len_src);
    if (dstsize < len_dst)
        return (len_src + dstsize);
    while (dst[i] && i < dstsize - 1)
        i++;
    while (src[j] && i < dstsize - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (len_dst + len_src);
}

