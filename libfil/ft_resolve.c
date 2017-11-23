/* ************************************************************************** */
<<<<<<< HEAD
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_resolve.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 20:11:44 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 12:39:45 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
=======
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:30:14 by llegros           #+#    #+#             */
/*   Updated: 2017/11/22 18:16:59 by llegros          ###   ########.fr       */
/*                                                                            */
>>>>>>> b369d41a5721ff912296b1eb31738419738ae181
/* ************************************************************************** */

#include "libfil.h"

static char	*ft_new_result(char *result, int size)
{
	int		j;

	j = 0;
	while (j < size * size + size)
	{
		result[j] = '.';
		if (((j + 1) % (size + 1)) == 0)
			result[j] = '\n';
		j++;
	}
	while (result[j])
	{
		result[j] = '\0';
		j++;
	}
	return (result);
}

static	int	ft_size(t_tetro *lsttetro)
{
	int		i;
	t_tetro	*save;

	i = 1;
	save = lsttetro;
	while (save->next != NULL)
	{
		i++;
		save = save->next;
	}
	i *= 4;
	while (!ft_sqrt(i))
		i++;
	i = ft_sqrt(i);
<<<<<<< HEAD
	return (i);
}

void		ft_resolve(t_tetro *lsttetro, int size)
{
	int		i;
	char	*result;
	char	*tmp;

	i = ft_size(lsttetro);
	if (!(result = (char*)malloc(sizeof(char) * (size * size + size + 1))))
		return ;
=======
>>>>>>> b369d41a5721ff912296b1eb31738419738ae181
	while (size >= i)
	{
		result = ft_new_result(result, size);
		if (!(ft_algo(result, lsttetro, 0, size)))
			return ;
		else
		{
			tmp = result;
			size--;
		}
	}
	ft_putstr("-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-\n");
	ft_putstr(tmp);
}
