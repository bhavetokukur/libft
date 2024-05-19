#include "../libft.h"

int main(void)
{
	char *str = "Hello World!";
	char *sub = ft_substr(str, 6, 5);
	printf("%s\n", sub);
	free(sub);
	return (0);
}