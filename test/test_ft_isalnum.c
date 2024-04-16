#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", ft_isalnum('z'));
	printf("%d\n", ft_isalnum('Z'));
	printf("[ %d\n", ft_isalnum('['));
	printf("%d\n", ft_isalnum('`'));
	printf("%d\n", ft_isalnum('{'));
	printf("%d\n", ft_isalnum('~'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", ft_isalnum('\n'));
	printf("%d\n", ft_isalnum('\t'));
	printf("%d\n", ft_isalnum('\v'));
	printf("%d\n", ft_isalnum('\r'));
	printf("%d\n", ft_isalnum('\f'));
	printf("%d\n", ft_isalnum('\b'));
	printf("%d\n", ft_isalnum(0));
	printf("%d\n", ft_isalnum(9));
	printf("%d\n", ft_isalnum(10));
	printf("%d\n", ft_isalnum(32));
	printf("%d\n", ft_isalnum(127));
	return (0);
}