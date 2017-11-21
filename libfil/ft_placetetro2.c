/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placetetro2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:42:40 by llegros           #+#    #+#             */
/*   Updated: 2017/11/20 17:32:17 by llegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

static int	ft_placetetro9(char *result, t_tetro *lsttetro, int i, int size)
{
	if (ft_strcmp("S2", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + size] = lsttetro->position;
		result[i + size + 1] = lsttetro->position;
		result[i + size * 2 + 1] = lsttetro->position;
		return (1);
	}
	if (ft_strcmp("Z1", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + 1] = lsttetro->position;
		result[i + size + 1] = lsttetro->position;
		result[i + size + 2] = lsttetro->position;
		return (1);
	}
	if (ft_strcmp("Z2", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + size - 1] = lsttetro->position;
		result[i + size] = lsttetro->position;
		result[i + size * 2 - 1] = lsttetro->position;
		return (1);
	}
	return (0);
}

static int	ft_placetetro8(char *result, t_tetro *lsttetro,	 int i, int size)
{
	if (ft_strcmp("O1", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + 1] = lsttetro->position;
		result[i + size] = lsttetro->position;
		result[i + size + 1] = lsttetro->position;
		return (1);
	}
	if (ft_strcmp("S1", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + 1] = lsttetro->position;
		result[i + size - 1] = lsttetro->position;
		result[i + size] = lsttetro->position;
		return (1);
	}
	return (ft_placetetro9(result, lsttetro, i ,size));
}

static int	ft_placetetro7(char *result, t_tetro *lsttetro, int i, int size)
{
	if (ft_strcmp("I1", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + size] = lsttetro->position;
		result[i + size * 2] = lsttetro->position;
		result[i + size * 3] = lsttetro->position;
		return (1);
	}
	if (ft_strcmp("I2", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + 1] = lsttetro->position;
		result[i + 2] = lsttetro->position;
		result[i + 3] = lsttetro->position;
		return (1);
	}
	return (ft_placetetro8(result, lsttetro, i ,size));
}

int			ft_placetetro6(char *result, t_tetro *lsttetro, int i, int size)
{
	if (ft_strcmp("J3", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + 1] = lsttetro->position;
		result[i + size] = lsttetro->position;
		result[i + size * 2] = lsttetro->position;
		return (1);
	}
	if (ft_strcmp("J4", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + 1] = lsttetro->position;
		result[i + 2] = lsttetro->position;
		result[i + size + 2] = lsttetro->position;
		return (1);
	}
	return (ft_placetetro7(result, lsttetro, i ,size));
}

