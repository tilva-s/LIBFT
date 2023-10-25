/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:05:58 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/10/25 21:01:05 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
	{
		*ptr = (unsigned char) c;
		ptr++;
	}
	return (s);
}
/*
int	main(void)
{
	char	*s = "ola sou o Tiago";
	int	c = '1';
	
	memset(s,c,2);
	return (0);
}*/
