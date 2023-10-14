/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoun <syoun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:39:28 by syoun             #+#    #+#             */
/*   Updated: 2023/09/21 16:23:37 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (big == 0 && little == 0)
		return (NULL);
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			while ((i + j) < len && big[i + j] == little[j])
			{
				if (little[j + 1] == '\0')
					return ((char *)big + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	big[] = "Hello World";
	const char	little[] = "llo";
	size_t len = 4;

	printf("%s\n", ft_strnstr(big, little, len));
}
len > specifies a max len in the big string within which substring is searched.
*/
