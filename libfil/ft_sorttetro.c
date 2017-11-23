/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sorttetro.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:48:04 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:48:06 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libfil.h"

t_tetro		*ft_sorttetro(char *str, int nbtetro)
{
	int		*hashid;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(hashid = (int*)malloc(sizeof(int) * (4 * nbtetro))))
		return (NULL);
	while (str[i])
	{
		if (str[i] == '#')
		{
			hashid[j] = i;
			j++;
		}
		i++;
	}
	return (ft_idintetro(hashid, nbtetro));
}

int			ft_validnb(char *str, int len)
{
	int		i;
	int		nbhach;
	int		lenc;

	i = 0;
	nbhach = 0;
	len = 1 + ((len - 20) / 21);
	lenc = 0;
	while (lenc != len)
	{
		while (str[i] && i < (20 + 21 * lenc))
		{
			if (str[i] == '#')
				nbhach++;
			i++;
		}
		lenc++;
		if (nbhach / 4 != lenc || nbhach % lenc != 0)
			return (0);
	}
	return (1);
}

int			ft_validshape(char *str, int len)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	len = 1 + ((len - 20) / 21);
	while (k < len)
	{
		while (i < (20 * k) + k + 20)
		{
			if (str[i] == '#' && str[i])
				j += ft_checkarround(str, i, k);
			i++;
		}
		if (j <= 4)
			return (0);
		j = 0;
		k++;
	}
	return (1);
}
