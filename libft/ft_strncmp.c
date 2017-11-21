/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:00:38 by llegros           #+#    #+#             */
/*   Updated: 2017/11/10 20:39:28 by llegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && (str1[i] != '\0' && str2[i] != '\0') && i < n)
		i++;
	if (i == n)
		i--;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
