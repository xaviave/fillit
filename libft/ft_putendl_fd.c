/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:18:28 by llegros           #+#    #+#             */
/*   Updated: 2017/11/13 10:54:58 by llegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	size_t	i;

	i = 0;
	if (s)
	{
		if (fd != -1)
		{
			while (s[i])
			{
				ft_putchar_fd(s[i], fd);
				i++;
			}
			ft_putchar_fd('\n', fd);
		}
	}
}
