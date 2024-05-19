#include "../libft.h"

// Function to print the linked list (assuming content is int for simplicity)
void print_list(t_list *lst) {
    while (lst != NULL)
	{
        printf("%d -> ", *(int *)(lst->content));
        lst = lst->next;
    }
    printf("NULL\n");
}

int main() {
    // Create initial list with one node
    int first_value = 1;
    t_list *head = ft_lstnew(&first_value);
    
    // Print the initial list
    printf("Initial list:\n");
    print_list(head);
    
    // Create a new node to add to the front
    int second_value = 2;
    t_list *new_node = ft_lstnew(&second_value);
    
    // Add the new node to the front
    ft_lstadd_front(&head, new_node);
    
    // Print the updated list
    printf("Updated list after adding a new node to the front:\n");
    print_list(head);
    
    // Add another node to the front
    int third_value = 3;
    t_list *another_new_node = ft_lstnew(&third_value);
    ft_lstadd_front(&head, another_new_node);
    
    // Print the updated list again
    printf("Updated list after adding another new node to the front:\n");
    print_list(head);
    
    // Free allocated memory (omitted for simplicity, but important in practice)
    
    return 0;
}