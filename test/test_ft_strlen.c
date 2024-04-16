#include <string.h>
#include <stdio.h>

int main(void)
{
	char *s = "Hello, World!";
	printf("ft_strlen: %d\n", ft_strlen(s));
	printf("strlen: %lu\n", strlen(s));
	return (0);
}