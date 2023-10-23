/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiago <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:41:02 by tiago             #+#    #+#             */
/*   Updated: 2023/10/20 15:18:31 by tiago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (head == NULL)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
/*
int	main(void) 
{
    int value = 42;
    t_list	*node = ft_lstnew(&value);

	if (node != NULL) {
        	printf("Conteúdo do nó: %d\n", *((int *)node->content));
    	}
	 else {
        	printf("Erro ao criar o nó.\n");
   	 }
    	free(node);
    return 0;
}*/
