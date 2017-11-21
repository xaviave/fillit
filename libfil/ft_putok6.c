/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putok6.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:32:59 by llegros           #+#    #+#             */
/*   Updated: 2017/11/20 17:21:40 by llegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

static int	ft_putok7(char *result, t_tetro *lsttetro, int i, int size)
{
	if (ft_strcmp("Z2", lsttetro->forme) == 0 && result[i + size * 2 - 1])
	{
		if (result[i] == '.' && result[i + size - 1] == '.'
				&& result[i + size] == '.' && result[i + size * 2 - 1] == '.')
			return (1);
	}
	return (0);
}

int			ft_putok6(char *result, t_tetro *lsttetro, int i, int size)
{
	if (ft_strcmp("S1", lsttetro->forme) == 0 && result[i + size])
	{
		if (result[i] == '.' && result[i + 1] == '.'
				&& result[i + size - 1] == '.' && result[i + size] == '.')
			return (1);
	}
	else if (ft_strcmp("S2", lsttetro->forme) == 0 && result[i + size * 2 + 1])
	{
		if (result[i] == '.' && result[i + size] == '.'
				&& result[i + size + 1] == '.'
				&& result[i + size * 2 + 1] == '.')
			return (1);
	}
	else if (ft_strcmp("Z1", lsttetro->forme) == 0 && result[i + size + 2])
	{
		if (result[i] == '.' && result[i + 1] == '.'
				&& result[i + size + 1] == '.' && result[i + size + 2] == '.')
			return (1);
	}
	return (ft_putok7(result, lsttetro, i, size));
}
