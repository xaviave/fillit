/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_idintetro.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:27:43 by llegros           #+#    #+#             */
/*   Updated: 2017/11/20 16:22:00 by llegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

t_tetro		*ft_idintetro(int *id, int nbtetro)
{
	int		i;
	t_tetro	*first;
	t_tetro	*save;
	char	pos;

	pos = 'A';
	i = 0;
	first = ft_newtetro(id[i], id[i + 1], id[i + 2], id[i + 3], pos);
	save = first;
	pos++;
	i += 4;
	while (nbtetro > 1)
	{
		save->next = ft_newtetro(id[i], id[i + 1], id[i + 2], id[i + 3], pos);
		save = save->next;
		i += 4;
		nbtetro--;
		pos++;
	}
	save->next = NULL;
	return (first);
}

t_tetro		*ft_newtetro(int i, int j, int k, int l, char pos)
{
	t_tetro	*new;
	if (!(new = (t_tetro*)malloc(sizeof(t_tetro))))
		return (0);
	new->forme = ft_shape(i, j, k, l);
	new->position = pos;
	return (new);
}

static char *ft_shape2(int i, int j, int k, int l)
{
	if ((j == i + 1) && (k == j + 4) && (l == k + 5))
		return ("J3");
	if ((j == i + 1) && (k == j + 1) && (l == k + 5))
		return ("J4");
	if ((j == i + 5) && (k == j + 5) && (l == k + 5))
		return ("I1");
	if ((j == i + 1) && (k == j + 1) && (l == k + 1))
		return ("I2");
	if ((j == i + 1) && (k == j + 5) && (l == k + 1))
		return ("Z1");
	if ((j == i + 4) && (k == j + 1) && (l == k + 4))
		return ("Z2");
	if ((j == i + 1) && (k == j + 3) && (l == k + 1))
		return ("S1");
	if ((j == i + 5) && (k == j + 1) && (l == k + 5))
		return ("S2");
	if ((j == i + 1) && (k == j + 4) && (l == k + 1))
		return ("O1");
	return ("erreur");
}

char		*ft_shape(int i, int j, int k, int l		)
{
	if ((j == i + 1) && (k == j + 1) && (l == k + 4))
		return ("T1");
	if ((j == i + 4) && (k == j + 1) && (l == k + 5))
		return ("T2");
	if ((j == i + 4) && (k == j + 1) && (l == k + 1))
		return ("T3");
	if ((j == i + 5) && (k == j + 1) && (l == k + 4))
		return ("T4");
	if ((j == i + 5) && (k == j + 5) && (l == k + 1))
		return ("L1");
	if ((j == i + 1) && (k == j + 1) && (l == k + 3))
		return ("L2");
	if ((j == i + 1) && (k == j + 5) && (l == k + 5))
		return ("L3");
	if ((j == i + 3) && (k == j + 1) && (l == k + 1))
		return ("L4");
	if ((j == i + 5) && (k == j + 4) && (l == k + 1))
		return ("J1");
	if ((j == i + 5) && (k == j + 1) && (l == k + 1))
		return ("J2");
	return (ft_shape2(i, j, k , l));
}
