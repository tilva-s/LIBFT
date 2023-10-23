/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:38:20 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/10/13 20:07:36 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char		*char_src;
	char			*char_dest;

	if (dest == NULL && src == NULL)
		return (NULL);
	char_dest = dest;
	char_src = src;
	while (n--)
	{
		*char_dest++ = *char_src++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = "";
	char dest[15];
	
	//memcpy(dest,src,10);
	ft_memcpy(dest, src, 10);
	printf("Dest: %s", dest);
	return (0);
}*/
