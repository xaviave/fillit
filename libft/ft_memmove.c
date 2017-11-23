/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:39:53 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:39:53 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
