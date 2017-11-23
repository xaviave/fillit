/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:39:52 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:39:52 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
