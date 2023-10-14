/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoun <syoun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:12:57 by marvin            #+#    #+#             */
/*   Updated: 2023/09/25 19:50:49 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*pstr1;
	const unsigned char	*pstr2;
	size_t				i;

	pstr1 = (const unsigned char *)str1;
	pstr2 = (const unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (pstr1[i] != pstr2[i])
		{
			return (pstr1[i] - pstr2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char pstr1[] = "42Vienna is fun.";
    char pstr2[] = "42Vienna is boring.";
    printf("%d\n", ft_memcmp(pstr1, pstr2, 14));

    int result = memcmp(pstr1, pstr2, 14);
    printf("%d\n", result);
}
*/
