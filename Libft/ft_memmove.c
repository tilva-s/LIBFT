/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:46:16 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/10/07 10:38:04 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*ptr;

	if (!dest && !src)
		return (0);
	ptr = dest;
	if (src < dest)
	{
		src = src + n;
		dest = dest + n;
		while (n--)
			*(char *)--dest = *(char *)--src;
	}
	else
		while (n--)
			*(char *)dest++ = *(char *)src++;
	return (ptr);
}
/*
int	main(void)
{
	char	char_src[100] = "Geeksforidaskmdaksdsakmldsfdscsda";
	char	dest[20] = "Sou o Tiago";

	ft_memmove(dest, char_src , 19);
	//memmove(dest, char_src, 19);
	printf("%s", char_src);
	return (0);
}*/
