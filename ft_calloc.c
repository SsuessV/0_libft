/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:56:29 by syoun             #+#    #+#             */
/*   Updated: 2023/09/25 19:56:52 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero (mem, nmemb * size);
	return (mem);
}
/*
int	main(void)
{
	char	str[11] = "Hello World";
	char	*allocated_mem = (char *)ft_calloc(11, sizeof(char));

	if(allocated_mem == NULL)
		return (NULL);
	strcpy(allocated_mem, str);
	printf("%s\n", allocated_mem);
	free(allocated_mem);

	return(0);
}
*/
