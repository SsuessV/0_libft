/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoun <syoun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:31:13 by syoun             #+#    #+#             */
/*   Updated: 2023/09/29 16:12:48 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	int	i;

	len = ft_strlen(s);
	i = len - 1;
	if (s == NULL)
		return (NULL);
	if ((char)c == '\0')
		return ((char *)s + len);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
int main(void)
{
    char    str[] = "I want h to gooooo home.";
    printf ("%s\n", (char *)ft_strrchr(str, 'h'));
}
*/
