/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:28:19 by llegros           #+#    #+#             */
/*   Updated: 2017/11/10 15:47:13 by llegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;

	a = (const unsigned char*)str1;
	b = (const unsigned char*)str2;
	while (n--)
	{
		if (*a != *b)
			return (*a - *b);
		if (n > 0)
		{
			a++;
			b++;
		}
	}
	return (0);
}
