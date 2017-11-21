/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:46:57 by llegros           #+#    #+#             */
/*   Updated: 2017/11/10 16:51:55 by llegros          ###   ########.fr       */
/*                                                                            */
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
