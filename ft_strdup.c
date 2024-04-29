#include "libft.h"
#include "ft_strlen.c"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main(void)
{
    char *s = "Hello";
    char *p = ft_strdup(s);
    printf("%s\n", p);
    return 0;
}