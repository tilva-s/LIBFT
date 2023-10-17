/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:37:30 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/10/17 21:10:49 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	char_c;

	char_c = (unsigned char) c;
	while (*s != char_c && *s != '\0')
	{
		s++;
	}
	if (*s == char_c)
		return ((char *) s);
	return (NULL);
}
/*
int	main(void)
{
	const	char	*str = "teste";
	int	c = 'e';

	printf("Teste: %s\n", ft_strchr(str,c));
	printf("Funcao: %s\n", strchr(str,c));
	return (0);
}*/
