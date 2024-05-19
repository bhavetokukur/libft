/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaziiev <thaziiev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 23:05:29 by thaziiev          #+#    #+#             */
/*   Updated: 2024/05/18 23:44:52 by thaziiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Define the structure for a list node


// Function to create a new list node
t_list *ft_lstnew(void *content)
{
    // Allocate memory for the new node
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return NULL; // Return NULL if memory allocation fails

    // Initialize the content and next pointer of the new node
    new_node->content = content;
    new_node->next = NULL;

    return new_node; // Return the new node
}
