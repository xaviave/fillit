/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:53:42 by llegros           #+#    #+#             */
/*   Updated: 2017/11/10 16:13:42 by llegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	lenneedle;

	if (*needle == '\0')
		return (char*)(haystack);
	lenneedle = ft_strlen(needle);
	while (*haystack != '\0' && n-- >= lenneedle)
	{
		if (*haystack == *needle
				&& ft_memcmp(haystack, needle, lenneedle) == 0)
			return (char*)(haystack);
		haystack++;
	}
	return (NULL);
}
