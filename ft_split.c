/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:21:59 by syoun             #+#    #+#             */
/*   Updated: 2023/10/14 14:41:12 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_substr(char const *s, char c)
{
	if (ft_strchr(s, c) == NULL)
		return (ft_strlen(s));
	else
		return ((ft_strchr(s, c) - s));
}

static int	ft_num_substr(const char *s, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			num++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (num);
}

static char	**ft_free_mem(char **mem)
{
	int	i;

	i = 0;
	while (mem[i])
	{
		free(mem[i]);
		i++;
	}
	free(mem);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**mem;
	int		i;
	int		j;

	i = 0;
	j = 0;
	mem = (char **)malloc((ft_num_substr(s, c) + 1) * sizeof(char *));
	if (!mem)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		mem[j] = malloc((ft_len_substr((char *)s + i, c) + 1) * sizeof(char));
		if (!(mem[j]))
			return (ft_free_mem(mem), NULL);
		ft_strlcpy(mem[j], s + i, (ft_len_substr(s + i, c)) + 1);
		i += ft_len_substr(s + i, c);
		j++;
	}
	mem[j] = NULL;
	return (mem);
}
