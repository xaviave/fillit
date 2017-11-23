/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_checkarround.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:45:31 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 12:09:55 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libfil.h"

static int	checktop(char *str, int i)
{
	if (str[i - 5] == '#')
		return (1);
	return (0);
}

static int	checkbot(char *str, int i)
{
	if (str[i + 5] == '#')
		return (1);
	return (0);
}

static int	checkleft(char *str, int i)
{
	if (str[i - 1] == '#')
		return (1);
	return (0);
}

static int	checkright(char *str, int i)
{
	if (str[i + 1] == '#')
		return (1);
	return (0);
}

int			ft_checkarround(char *str, int i, int k)
{
	int j;

	j = 0;
	if ((i - k + 2) % 5 != 0)
		j += checkright(str, i);
	if ((i - k) % 5 != 0)
		j += checkleft(str, i);
	if ((k * 21) + 15 != i && (k * 21) + 16 != i && (k * 21) + 17 != i
			&& (k * 21) + 18 != i)
		j += checkbot(str, i);
	if ((k * 21) != i && (k * 21) + 1 != i && (k * 21) + 2 != i
			&& (k * 21) + 3 != i)
		j += checktop(str, i);
	return (j);
}
