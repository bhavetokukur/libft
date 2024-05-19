
#include "../libft.h"

int main()
{
	char src[50] = "thaziiev";
	char dest[50] = "";
	ft_memcpy(dest, src, 8);
	printf("%s\n", dest);
	return (0);
}
