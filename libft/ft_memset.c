/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:39:53 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:39:53 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
