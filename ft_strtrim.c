/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:17:49 by marvin            #+#    #+#             */
/*   Updated: 2023/09/29 16:07:44 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;
	size_t	counter;

	start = 0;
	end = ft_strlen(s1);
	counter = 0;
	if (!s1 || !set)
		return (0);
	while ((start < end && ft_strchr(set, s1[start])))
		start++;
	while ((end > start && ft_strchr(set, s1[end - 1])))
		end--;
	trimmed = (char *)malloc(end - start + 1);
	if (!trimmed)
		return (NULL);
	while (start < end)
		trimmed[counter++] = s1[start++];
	trimmed[counter] = '\0';
	return (trimmed);
}
/*
int main(void)
{
    char s1[] = "HelloHello42viennaHello";
    char set[] = "lloH";
    printf("%s\n", (char *)ft_strtrim(s1, set));
}
*/