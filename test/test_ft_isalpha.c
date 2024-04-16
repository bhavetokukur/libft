int main() {
    char str1[] = "HelloWorld";
    char str2[] = "Hello123";
    char str3[] = "";
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("%d\n", ft_str_is_alpha(str1)); // Output: 1 (All alphabetical)
    printf("%d\n", ft_str_is_alpha(str2)); // Output: 0 
    printf("%d\n", ft_str_is_alpha(str3)); // Output: 1 (Empty string)
    printf("%d\n", ft_str_is_alpha(str)); // Output: 1 (Empty string)

    return 0;
}
