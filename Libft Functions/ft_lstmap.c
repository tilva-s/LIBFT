/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:37:29 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/10/23 20:30:21 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lista;
	t_list	*new_node;

	lista = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		new_node = (t_list *)malloc(sizeof(t_list));
		if (!new_node)
		{
			ft_lstclear(&new_node, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		new_node->next = NULL;
		ft_lstadd_back(&lista, new_node);
		lst = lst->next;
	}
	return (lista);
}
