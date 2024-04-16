
int main() {
	// int source[] = {72, 101, 108, 108, 111};	
	// int destination[15];
    char source[] = "Hello, World!";
    char destination[15];

	// int source2[] = {72, 101, 108, 108, 111};
	// int destination2[15];
    char source2[] = "Hello, World!";
    char destination2[15];
	// printf("size of source: %lu\n", sizeof(source));
	// printf("/ is %lu \n", (sizeof(source) / sizeof(source[0])));
	
    // Copy the contents of source string to destination string
    memcpy(destination, source, sizeof(source));

    // Print the contents of the destination string
	for (int i = 0; i < (int)(sizeof(source) / sizeof(source[0])); i++)
	{
		/* code */
    	printf("%c", destination[i]);
	}
	
	printf("\n");
	
	ft_memcpy(destination2, source2, sizeof(source2));

	for (int i = 0; i < (int)(sizeof(source2) / sizeof(source2[0])); i++)
	{
		/* code */
    	printf("%c", destination2[i]);
	}
    return 0;
}
