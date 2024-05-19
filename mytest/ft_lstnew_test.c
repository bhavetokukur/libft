#include "../libft.h"

// Example usage of the ft_lstnew function
int main()
{
    // Create a new list node with some content
    int content = 42;
    t_list *node = ft_lstnew(&content);

    // Check if the node was created successfully
    if (node)
    {
        printf("Node created successfully!\n");
        printf("Node content: %d\n", *(int *)(node->content));
    }
    else
    {
        printf("Failed to create node.\n");
    }

    // Free the allocated memory for the node
    free(node);

    return 0;
}
