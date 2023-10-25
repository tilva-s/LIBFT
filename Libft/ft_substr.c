/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:41:13 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/10/13 20:24:53 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
	{
		len = ft_strlen(s + start);
	}
	ptr = (char *) malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
/*
int	main(void)
{
	const char *s = "ola sou o Tiago";
	unsigned int start = 3;
	size_t len = 5;
	char *ptr;
	
	printf("LEN:%lu\n", ft_strlen(s + start));
	printf("S + start: %s\n", s + start);
	ptr = ft_substr(s, start, len);
	printf("%s\n", ptr);
	return (0);   
}*/
