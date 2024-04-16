int main()
{
	char str[50] = "Hello, World!";
	ft_memset(str, 'z', 3);
	printf("%s\n", str);
	char c_str[50] = "Hello, World!";
    
    printf("Before memset: %s\n", c_str);
    memset(c_str, '*', 3); // Fill the first 5 characters with '*'
    printf("After memset: %s\n", c_str);
	return (0);
}