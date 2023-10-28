/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:41:17 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/10/27 18:45:04 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_strncmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (0);
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*ptr;
	size_t		i;

	i = 0;
	ptr = big;
	if (little[i] == '\0')
		return ((char *)(big));
	while (i < len && *big)
	{
		if (*little == *big && my_strncmp(big, little)
			&& (i + ft_strlen(little) <= len))
			return ((char *)(ptr + i));
		i++;
		big++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s1 = "ola aaxx";
	char	*s2 = "xx";
	char	*ptr;

	ptr = ft_strnstr(s1, s2, 8);
	printf("%s", ptr);
	return (0);
}*/
