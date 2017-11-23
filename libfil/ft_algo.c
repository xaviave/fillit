/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_algo.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: llegros <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 12:54:52 by llegros      #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 14:39:12 by llegros     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libfil.h"

int		ft_algo(char *result, t_tetro *lsttetro, int i, int size)
{
	if (i != 0)
		ft_erase(result, lsttetro, size);
	if ((i = ft_puttetro(result, lsttetro, i, size)))
	{
		if (lsttetro->next == NULL)
			return (1);
		if (result[i] == '\n')
			i++;
		if (result[i] == '\0')
			return (0);
		return (ft_algo(result, lsttetro->next, 0, size)
				|| ft_algo(result, lsttetro, i, size));
	}
	return (0);
}
