/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putok.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: llegros <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 13:03:43 by llegros      #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 15:26:25 by llegros     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libfil.h"

static int		ft_putok5(char *result, t_tetro *lsttetro, int i, int size)
{
	if (ft_strcmp("I1", lsttetro->forme) == 0 && result[i] == '.'
			&& result[i + size] == '.' && result[i + size * 2] == '.'
			&& result[i + size * 3] == '.')
		return (1);
	else if (ft_strcmp("I2", lsttetro->forme) == 0 && result[i] == '.'
			&& result[i + 1] == '.' && result[i + 2] == '.'
			&& result[i + 3] == '.')
		return (1);
	else if (ft_strcmp("O1", lsttetro->forme) == 0
			&& result[i] == '.' && result[i + 1] == '.'
			&& result[i + size] == '.' && result[i + size + 1] == '.')
		return (1);
	else
		return (ft_putok6(result, lsttetro, i, size));
}

static int		ft_putok4(char *result, t_tetro *lsttetro, int i, int size)
{
	if (ft_strcmp("J2", lsttetro->forme) == 0 && result[i] == '.'
			&& result[i + size] == '.' && result[i + size + 1] == '.'
			&& result[i + size + 2] == '.')
		return (1);
	else if (ft_strcmp("J3", lsttetro->forme) == 0 && result[i] == '.'
			&& result[i + 1] == '.' && result[i + size] == '.'
			&& result[i + size * 2] == '.')
		return (1);
	else if (ft_strcmp("J4", lsttetro->forme) == 0 && result[i] == '.'
			&& result[i + 1] == '.' && result[i + 2] == '.'
			&& result[i + size + 2] == '.')
		return (1);
	else
		return (ft_putok5(result, lsttetro, i, size));
}

static int		ft_putok3(char *result, t_tetro *lsttetro, int i, int size)
{
	if (ft_strcmp("L3", lsttetro->forme) == 0 && result[i] == '.'
			&& result[i + 1] == '.' && result[i + size + 1] == '.'
			&& result[i + size * 2 + 1] == '.')
		return (1);
	else if (ft_strcmp("L4", lsttetro->forme) == 0 && result[i] == '.'
			&& result[i + size - 2] == '.' && result[i + size - 1] == '.'
			&& result[i + size] == '.')
		return (1);
	else if (ft_strcmp("J1", lsttetro->forme) == 0 && result[i] == '.'
			&& result[i + size] == '.' && result[i + size * 2] == '.'
			&& result[i + size * 2 - 1] == '.')
		return (1);
	else
		return (ft_putok4(result, lsttetro, i, size));
}

static int		ft_putok2(char *result, t_tetro *lsttetro, int i, int size)
{
	if (ft_strcmp("T4", lsttetro->forme) == 0 && result[i] == '.'
			&& result[i + size] == '.' && result[i + size + 1] == '.'
			&& result[i + size + size] == '.')
		return (1);
	else if (ft_strcmp("L1", lsttetro->forme) == 0 && result[i] == '.'
			&& result[i + size] == '.' && result[i + size * 2] == '.'
			&& result[i + 2 * size + 1] == '.')
		return (1);
	else if (ft_strcmp("L2", lsttetro->forme) == 0 && result[i] == '.'
			&& result[i + 1] == '.' && result[i + 2] == '.'
			&& result[i + size] == '.')
		return (1);
	else
		return (ft_putok3(result, lsttetro, i, size));
}

int				ft_putok(char *result, t_tetro *lsttetro, int i, int size)
{
	size += 1;
	if (ft_strcmp("T1", lsttetro->forme) == 0 && result[i] == '.'
			&& result[i + 1] == '.' && result[i + 2] == '.'
			&& result[i + size + 1] == '.')
		return (1);
	else if (ft_strcmp("T2", lsttetro->forme) == 0 && result[i] == '.'
			&& result[i + size - 1] == '.' && result[i + size] == '.'
			&& result[i + size * 2] == '.')
		return (1);
	else if (ft_strcmp("T3", lsttetro->forme) == 0 && result[i] == '.'
			&& result[i + size - 1] == '.' && result[i + size] == '.'
			&& result[i + size + 1] == '.')
		return (1);
	else
		return (ft_putok2(result, lsttetro, i, size));
}
