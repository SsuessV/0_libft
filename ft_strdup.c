/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:04:51 by syoun             #+#    #+#             */
/*   Updated: 2023/09/25 20:05:09 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*dup_str;

	len = ft_strlen(s);
	i = 0;
	dup_str = (char *)malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		dup_str[i] = s[i];
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}
/*
int main(void)
{
    char s[] = "Even on the weekends";
    printf("%s\n", (char*)ft_strdup(s));
}
*/
