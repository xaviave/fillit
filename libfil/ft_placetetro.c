/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placetetro.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:41:14 by llegros           #+#    #+#             */
/*   Updated: 2017/11/20 20:54:47 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

static int		ft_placetetro5(char *result, t_tetro *lsttetro, int i, int size)
{
	if (ft_strcmp("J1", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + size] = lsttetro->position;
		result[i + size * 2] = lsttetro->position;
		result[i + size * 2 - 1] = lsttetro->position;
		return (1);
	}

	if (ft_strcmp("J2", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + size] = lsttetro->position;
		result[i + size + 1] = lsttetro->position;
		result[i + size * 2] = lsttetro->position;
		return (1);
	}
	return (ft_placetetro6(result, lsttetro, i ,size));
}

static int		ft_placetetro4(char *result, t_tetro *lsttetro, int i, int size)
{
	if (ft_strcmp("L3", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + 1] = lsttetro->position;
		result[i + size + 1] = lsttetro->position;
		result[i + size * 2 + 1] = lsttetro->position;
		return (1);
	}
	if (ft_strcmp("L4", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + size - 2] = lsttetro->position;
		result[i + size - 1] = lsttetro->position;
		result[i + size] = lsttetro->position;
		return (1);
	}
	return (ft_placetetro5(result, lsttetro, i, size));
}

static int		ft_placetetro3(char *result, t_tetro *lsttetro, int i, int size)
{
	if (ft_strcmp("L1", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + size] = lsttetro->position;
		result[i + size * 2] = lsttetro->position;
		result[i + size * 2 + 1] = lsttetro->position;
		return (1);
	}
	if (ft_strcmp("L2", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + 1] = lsttetro->position;
		result[i + 2] = lsttetro->position;
		result[i + size] = lsttetro->position;
		return (1);
	}
	return (ft_placetetro4(result, lsttetro, i, size));
}

static int		ft_placetetro2(char *result, t_tetro *lsttetro, int i, int size)
{
	if (ft_strcmp("T3", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + size - 1] = lsttetro->position;
		result[i + size] = lsttetro->position;
		result[i + size + 1] = lsttetro->position;
		return (1);
	}

	if (ft_strcmp("T4", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + size] = lsttetro->position;
		result[i + size + 1] = lsttetro->position;
		result[i + size * 2] = lsttetro->position;
		return (1);
	}
	return (ft_placetetro3(result, lsttetro, i, size));
}

int		ft_placetetro(char *result, t_tetro *lsttetro, int i, int size)
{
	size += 1;
	if (ft_strcmp("T1", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + 1] = lsttetro->position;
		result[i + 2] = lsttetro->position;
		result[i + size + 1] = lsttetro->position;
		return (1);
	}
	if (ft_strcmp("T2", lsttetro->forme) == 0)
	{
		result[i] = lsttetro->position;
		result[i + size - 1] = lsttetro->position;
		result[i + size] = lsttetro->position;
		result[i + size * 2] = lsttetro->position;
		return (1);
	}
	return (ft_placetetro2(result, lsttetro, i, size));
}
