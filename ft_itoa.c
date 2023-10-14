/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:14:41 by syoun             #+#    #+#             */
/*   Updated: 2023/10/05 15:38:40 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_digit(long num)
{
	int	i;

	i = 1;
	while (num / 10)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*converted;
	long	num;

	num = n;
	i = c_digit(n);
	if (n < 0)
	{
		num *= -1;
		i++;
	}
	converted = (char *)malloc(sizeof(char) * i + 1);
	if (!converted)
		return (NULL);
	converted[i--] = '\0';
	while (i >= 0)
	{
		converted[i] = num % 10 + '0';
		num /= 10;
		i--;
	}
	if (n < 0)
		converted[0] = '-';
	return (converted);
}
/*
#include <stdio.h>
int	main(void)
{
	int	number = -57349;
	printf("%s", ft_itoa(number));
}
*/