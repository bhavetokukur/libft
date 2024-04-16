int main(void)
{
	char str1[] = "Hello World!";
	char dest1[50];

	char str2[] = "Hello World!";
	char dest2[50];

	// printf("\n");

	ft_memmove(dest1, str1, 7);
	printf("%s\n", dest1);
	memmove(dest2, str2, 7);
	printf("%s\n", dest2);
	for (int i = 0; i < (int)(sizeof(str1) / sizeof(str1[0])); i++)
	{
		/* code */
    	printf("%c", dest1[i]);
	}
	return (0);
}
