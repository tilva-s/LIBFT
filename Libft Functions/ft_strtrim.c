/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:47:38 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/10/13 22:01:28 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char s1, char const *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		if (s1 == s2[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	i = 0;
	while (s1[i] != '\0' && ft_char_in_set(s1[i], set))
	{
		i++;
	}
	j = ft_strlen(s1);
	while (j > i && ft_char_in_set(s1[j - 1], set))
	{
		j--;
	}
	ptr = (char *)malloc((j - i + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	k = 0;
	while (i < j)
		ptr[k++] = s1[i++];
	ptr[k] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	*s1 = "OLA&OLA";
	char	*set = "OLA";
	char	*ptr;
	
	ptr = ft_strtrim(s1, set);
	printf("%s", ptr);
	return (0);
}*/
