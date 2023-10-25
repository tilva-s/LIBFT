/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:20:33 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/10/17 21:04:41 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n > 1 && (*s1 == *s2) && *s1)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
/*
int	main(void)
{
	char	*s1 = "113";
	char	*s2 = "16";

	printf("%d\n", ft_strncmp(s1, s2, 2));
	printf("Funcao:%d\n", strncmp(s1, s2, 2));
	return (0);
}*/
