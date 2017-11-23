/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:40:20 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:40:20 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
