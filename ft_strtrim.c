#include "libft.h"
#include "ft_strlcpy.c"
#include "ft_strchr.c"
#include "ft_substr.c"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		size_s1;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	size_s1 = ft_strlen((char *)s1);
	// printf("%zu\n", size_s1);
	while (ft_strchr(set, s1[size_s1]) && size_s1 != 0)
		size_s1--;
	return (ft_substr((char *)s1, 0, size_s1 + 1));
}

int main(void)
{
    char *s1 = "  hello  ";
    char *set = " ";
    char *s2 = ft_strtrim(s1, set);
    printf("%s\n", s2);
    return (0);
}