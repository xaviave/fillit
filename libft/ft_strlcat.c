/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:17:40 by llegros           #+#    #+#             */
/*   Updated: 2017/11/07 16:29:08 by llegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t l)
{
	size_t i;
	size_t destlen;
	size_t srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (l < destlen)
		return (l + srclen);
	i = 0;
	while (src[i] != '\0' && (destlen + i + 1) < l)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
