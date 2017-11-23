/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strequ.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:40:15 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:40:15 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t	i;

	i = 0;
	if (s1 && s2)
	{
		if (ft_strcmp(s1, s2) == 0)
			return (1);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (1);
		while (s1[i] == s2[i])
			i++;
		if (s1[i] != s2[i])
			return (0);
		return (1);
	}
	return (0);
}
