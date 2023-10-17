/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:39:15 by tsilva-s          #+#    #+#             */
/*   Updated: 2023/10/13 21:57:20 by tsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_n(int n, int count)
{
	if (n <= 9 && n >= 0)
		return (count);
	else
	{
		count++;
		return (ft_count_n((n / 10), count));
	}
}

static char	*ft_write_number(int n, char *str, int index)
{
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
		return (ft_write_number(n, str, index));
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
		return (ft_write_number(n, str, index));
	}
	if (n <= 9 && n >= 0)
	{
		str[index] = n + '0';
		return (str);
	}
	else
	{
		str = ft_write_number(n / 10, str, index - 1);
		str[index] = (n % 10) + '0';
		return (str);
	}
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		count;

	count = ft_count_n(n, 0);
	ptr = (char *)malloc((count + 2) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr = ft_write_number(n, ptr, count);
	ptr[count + 1] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	int	n = 2147447;
	char	*p;

	p = ft_itoa(n);
	printf("%s", p);
	return (0);
}*/
