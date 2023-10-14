/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:21:43 by syoun             #+#    #+#             */
/*   Updated: 2023/10/12 11:17:51 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (!d && !s)
		return (NULL);
	if (d < s)
		ft_memcpy(d, s, n);
	else if (d > s)
	{
		while (n >= 1)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (dest);
}
/*
int main(void)
{
	size_t    len = 30;
	char csrc[] = "Aight";
	char cdest[] = "We got this";

	ft_memmove (cdest, csrc, len);
	printf ("%s", cdest);
	return (0);
}
*/
