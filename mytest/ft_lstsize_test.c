#include "../libft.h"

int main(void)
{
	t_list *head;
    t_list *second;
    t_list *third;

    head = (t_list*)malloc(sizeof(t_list));
    second = (t_list*)malloc(sizeof(t_list));
    third = (t_list*)malloc(sizeof(t_list));

    head->next = second;
    second->next = third;
    third->next = NULL;

    printf("The size of the linked list is %d\n", ft_lstsize(head));
    return (0);
}