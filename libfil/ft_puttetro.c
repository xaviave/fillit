/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_puttetro.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: llegros <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 12:55:22 by llegros      #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 15:03:10 by llegros     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libfil.h"

int		ft_puttetro(char *result, t_tetro *lsttetro, int i, int size)
{
	int j;

	j = 0;
	while ((j = (ft_putok(result, lsttetro, i, size))) != 1 && result[i + 1])
		i++;
	if (j == 0)
		return (0);
	if (ft_placetetro(result, lsttetro, i, size))
		return (i + 1);
	return (0);
}
