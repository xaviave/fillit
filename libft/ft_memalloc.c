/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:02:18 by llegros           #+#    #+#             */
/*   Updated: 2017/11/09 13:07:55 by llegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*zone;
	size_t	i;

	i = 0;
	if (!(zone = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	while (i < size)
	{
		zone[i] = 0;
		i++;
	}
	return (zone);
}
