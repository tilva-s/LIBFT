/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:44:30 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/10/17 21:08:35 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (size <= len_dst || size == 0)
		return (len_src + size);
	while (src[i] != '\0' && i < size - len_dst - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_src + len_dst);
}
/*
int	main(void)
{
	char	dst[10] = "a";
	size_t	retorno;

	retorno = ft_strlcat(dst, "lorem ipsum dolor sit amet", 6);
	printf("dst:|%s|\n", dst);
	printf("%zu", retorno);
	return (0);
}
*/
