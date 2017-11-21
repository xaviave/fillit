/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:00:58 by llegros           #+#    #+#             */
/*   Updated: 2017/11/08 14:40:51 by llegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*rep;
	size_t	i;

	rep = str;
	i = 0;
	while (i < n)
	{
		rep[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
