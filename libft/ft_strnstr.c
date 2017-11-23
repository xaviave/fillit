/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:40:56 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:40:56 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
