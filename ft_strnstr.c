
#include "libft.h"
#include "ft_memcmp.c"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t len_little;

	len_little = strlen(little);
	if (!len_little)
		return ((char *)big);
	while (len >= len_little)
    {
		len--;
		if (!ft_memcmp(big, little, len_little))
			return ((char *)big);
		big++;
	}
	return (NULL);
}

int main(void)
{
    char *p;
    char *s = "oobar";
    char *l = "bar";

    p = ft_strnstr(s, l, 5);
    printf("%s\n", p);
    // p = strnstr(s, l, 4);
}