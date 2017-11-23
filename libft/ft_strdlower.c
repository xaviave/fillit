/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdlower.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:40:02 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:40:02 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdlower(const char *str)
{
	char	*dup;
	size_t	i;

	i = 0;
	if (!(dup = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			dup[i] = str[i] + 32;
		else
			dup[i] = str[i];
		i++;
	}
	return (dup);
}
