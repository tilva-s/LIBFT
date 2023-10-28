/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:32:49 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/10/17 20:56:50 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*ptr;
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		i++;
	}
	ptr = malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (j < i)
	{
		ptr[j] = s[j];
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	*s = "Ola eu sou";
	char	*ptr;

	ptr = ft_strdup(s);
	printf("%c", ptr[0]);
	return (0);
}*/
