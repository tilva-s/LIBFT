/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:59:19 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/10/05 15:03:18 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size != 0)
	{
		i = 0;
		while (src[i] != 0 && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i] != 0)
		i++;
	return (i);
}
/*
int	main(void)
{
	char src[50] = "Ola Sou o Tiago";
	char dst[] = "UI ui";
	size_t size = 0;

	printf("%zu\n", ft_strlcpy(dst, src, size));
	printf("%s\n", dst);
	printf("%lu", strlen(src));
	//printf("%zu", strlcpy(dst, src, size));
	return (0);
}*/
