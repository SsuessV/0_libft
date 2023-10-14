/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:30:31 by syoun             #+#    #+#             */
/*   Updated: 2023/09/22 13:35:04 by syoun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((65 <= c && c <= 90) || (97 <= c && c <= 122)) || (48 <= c && c <= 57))
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
	printf("%d\n", ft_isalnum ('3'));
	printf("%d\n", ft_isalnum ('A'));
	printf("%d\n", ft_isalnum ('z'));
	printf("%d\n", ft_isalnum ('$'));
}
*/
