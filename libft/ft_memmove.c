/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:07:08 by llegros           #+#    #+#             */
/*   Updated: 2017/11/10 15:57:29 by llegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (str2 < str1)
	{
		while (n)
		{
			((unsigned char*)str1)[n - 1] = ((unsigned char*)str2)[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(str1, str2, n);
	return (str1);
}
