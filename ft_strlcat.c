/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:08:54 by syoun             #+#    #+#             */
/*   Updated: 2023/09/25 20:07:49 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dst == NULL && src == NULL)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0' && i < size)
		i++;
	while ((i + j + 1) < size && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
int	main(void)
{
	char	src[] = "It's lunch time.";
	char	dst[] = ", but i am not hungry.";
	size_t result = ft_strlcat(dst, src, sizeof(dst));
	printf("%s\n", ft_strlcat(dst, src, result));
	printf("%s\n", strlcat(dst, src, result));
}
*/
