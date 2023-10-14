/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:59:45 by syoun             #+#    #+#             */
/*   Updated: 2023/10/03 14:36:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ps;
	unsigned char		ch;
	size_t				i;

	ps = (const unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ps[i] == ch)
		{
			return ((void *) &ps[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str[] = "Find the character.";
	printf("%p\n", (void *)ft_memchr(str, 't', 8));
	printf("%p\n", (void *)memchr(str, 't', 8));
	return (0);
}
*/
