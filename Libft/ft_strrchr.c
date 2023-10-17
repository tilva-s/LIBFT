/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:31:46 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/10/17 21:10:23 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*ptr;
	int				check;

	check = 0;
	while (*s)
	{
		if (*s == (char)c)
		{
			ptr = s;
			check = 1;
		}
		s++;
	}
	if (check == 1)
		return ((char *)ptr);
	if (*s == (char)c)
	{
		ptr = s;
		return ((char *)ptr);
	}
	else
		return (NULL);
}
/*
int	main(void)
{
	const char *s = "";
//	int	c =;

	printf("Mine:|%s|\n", ft_strrchr(s, '\0'));
	printf("Funcao:|%s|", strrchr(s, '\0'));
	return (0);
}*/
