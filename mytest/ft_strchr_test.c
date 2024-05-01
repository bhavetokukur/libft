#include "../libft.h"

int main(void)
{
	printf("d = %d, c = %c (%d)\n", 't' + 256, 't' + 256, (char)('t' + 256));
	char s[] = "tripouille";
	if (ft_strchr(s, 't' + 256) == s)
		return (0);
	else
		return (1);
}