/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:40:59 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:40:59 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlentn(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*fresh;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	k = 0;
	if (ft_strlentn(s) == 1)
		return (fresh = ft_strdup(""));
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[j - 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t')
		j--;
	if (!(fresh = (char*)malloc(sizeof(char) * ((j - i) + 1))))
		return (NULL);
	while (i < j)
		fresh[k++] = s[i++];
	fresh[k] = '\0';
	return (fresh);
}
