/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:59:19 by syoun             #+#    #+#             */
/*   Updated: 2023/09/25 19:59:38 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((64 < c && c < 91) || (96 < c && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	printf("%d\n", ft_isalpha('%'));
	printf("%d\n", ft_isalpha('5'));
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('z'));
}
*/
