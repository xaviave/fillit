/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_changeto.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:39:43 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:39:43 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_changeto(char *str, char c)
{
	size_t	i;
	char	*change;

	i = 0;
	if (!(change = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	while (str[i] != '\0')
	{
		change[i] = c;
		i++;
	}
	change[i] = '\0';
	return (change);
}
