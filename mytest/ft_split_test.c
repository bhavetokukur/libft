#include "../libft.h"


int main(void)
{
	// int n = 6;
	// char *s = "--1-2--3---4----5-----42";
	// char c = '-';
	char *s = "  tripouille  42  trilochan ";
	char c = ' ';
	char **new_arr = ft_split(s, c);
	int i = 0;
	int j = 0;
	while (new_arr[i] != NULL)
    {
        j = 0;
        while(new_arr[i][j] != '\0')
        {
            write(1, &new_arr[i][j], 1);
			j++;
        }
    	write(1, "\n", 1);
		i++;
    }
	return (0);
}
