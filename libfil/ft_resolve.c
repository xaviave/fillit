/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:30:14 by llegros           #+#    #+#             */
/*   Updted: 2017/11/21 15:07:09 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

void	ft_resolve(t_tetro *lsttetro, int size)
{
	int		j;
	int		i;
	char	*result;
	char	*tmp;
	t_tetro	*save;

	i = 1;
	save = lsttetro;
	while (save->next != NULL)
	{
		i++;
		save = save->next;
	}
	i *= 4;
	while (!ft_sqrt(i))
		i++;
	i = ft_sqrt(i);
	while (size >= i)
	{
		j = 0;
		if (!(result = (char*)malloc(sizeof(char) * (size * size + size + 1))))
			return ;
		while (j < size * size + size)
		{
			result[j] = '.';
			if (((j + 1) % (size + 1)) == 0)
				result[j] = '\n';
			j++;
		}
		ft_algo(result, lsttetro, 0, size);
		result[j] = '\0';
		ft_putstr(result);
		tmp = result;
		free(result);
		size--;
	}
	ft_putstr(result);
}
