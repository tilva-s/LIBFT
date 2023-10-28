/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:51:30 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/10/25 19:56:37 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, int c)
{
	int	i;
	int	check;

	check = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && check == 0)
		{
			i++;
			check = 1;
		}
		else if (*s == c)
			check = 0;
		s++;
	}
	return (i);
}

static char	*ft_put_word(const char *s, int begining, int end)
{
	char	*ptr2;
	int		i;

	ptr2 = (char *)malloc((end - begining + 1) * sizeof(char));
	i = 0;
	while (begining < end)
	{
		ptr2[i] = s[begining];
		i++;
		begining++;
	}
	ptr2[i] = '\0';
	return (ptr2);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	j;
	int		check;
	size_t	i;

	ptr = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!s || !ptr)
		return (NULL);
	check = -1;
	i = 0;
	j = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && check < 0)
			check = i;
		else if ((s[i] == c || i == ft_strlen(s)) && check >= 0)
		{
			ptr[j++] = ft_put_word(s, check, i);
			check = -1;
		}
		i++;
	}
	ptr[j] = NULL;
	return (ptr);
}

/*
int main(void)
{
    char const *s = "Ola sou o Tiago";
    char c = ' ';
    char **ptr2;
    int number;
    int i;

    i = 0;
    ptr2 = ft_split(s, c);

    if (ptr2 == NULL)
    {
        printf("Falha na alocação de memória.\n");
        return 1; 
    }
    number = ft_count_word(s, c);

    while (i < number)
    {
        printf("Numero de palavras: %s\n", ptr2[i]);
        i++;
    }
    return 0;
}*/
