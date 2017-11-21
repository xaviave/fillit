/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:18:57 by llegros           #+#    #+#             */
/*   Updated: 2017/11/15 14:13:20 by llegros          ###   ########.fr       */
/*                                                                            */
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
