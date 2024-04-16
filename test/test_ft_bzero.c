#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World!";
    ft_bzero(str, 5);
    printf("%s\n", str+5);
	
	char str2[] = "Hello World!";
	bzero(str2, 2);
	printf("%s\n", str2+2);	
    return (0);
}
