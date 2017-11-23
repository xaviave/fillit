/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:40:20 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:40:20 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#define FTLEN ft_strlen

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*fresh;

	i = 0;
	j = 0;
	if (s1 && s2)
	{
		if (!(fresh = (char*)malloc(sizeof(char) * (FTLEN(s1) + FTLEN(s2)))))
			return (NULL);
		ft_strcpy(fresh, s1);
		ft_strcat(fresh, s2);
		return (fresh);
	}
	return (0);
}
