/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrev.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:40:56 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:40:56 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	size_t	i;
	size_t	j;
	char	*rev;

	i = ft_strlen(str);
	j = 0;
	if (!(rev = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	rev[i] = '\0';
	while (i-- > 0)
	{
		rev[i] = str[j];
		j++;
	}
	return (rev);
}
