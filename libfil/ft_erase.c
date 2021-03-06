/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_erase.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:42:37 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 13:00:04 by llegros     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libfil.h"

void	ft_erase(char *result, t_tetro *lsttetro, int size)
{
	int i;

	i = 0;
	while (i < size * size + size)
	{
		if (result[i] == lsttetro->position)
			result[i] = '.';
		i++;
	}
	while (result[i])
	{
		result[i] = '\0';
		i++;
	}
}
