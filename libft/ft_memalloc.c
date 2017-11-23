/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memalloc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:39:52 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:39:52 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
