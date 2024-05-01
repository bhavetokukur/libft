#include "libft.h"

int main(void)
{
	char *s = "hello world";
	char **arr = ft_split(s, ' ');
	for (int i = 0; arr[i]; i++)
	{
		printf("%s\n", arr[i]);
	}
	return (0);
}

// int main()
// {
// 	printf("%c", ft_toupper('a'));
// }