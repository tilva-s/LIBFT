/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:30:30 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/10/13 22:00:54 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	if (!s || !f)
		return (NULL);
	ptr = malloc(ft_strlen(s) + 1);
	if (ptr == NULL)
		return (NULL);
	else
		ft_memset(ptr, '\0', ft_strlen(s));
	ft_strcpy(ptr, s);
	while (ptr[i] != '\0')
	{
		ptr[i] = (*f)(i, ptr[i]);
		i++;
	}
	return (ptr);
}
