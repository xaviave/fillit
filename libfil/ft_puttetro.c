/* ************************************************************************** */
<<<<<<< HEAD
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_puttetro.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:47:39 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 12:30:51 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
=======
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttetro.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:20:19 by llegros           #+#    #+#             */
/*   Updated: 2017/11/22 18:20:54 by llegros          ###   ########.fr       */
/*                                                                            */
>>>>>>> b369d41a5721ff912296b1eb31738419738ae181
/* ************************************************************************** */

#include "libfil.h"

int		ft_puttetro(char *result, t_tetro *lsttetro, int i, int size)
{
	int j;

	j = 0;
<<<<<<< HEAD
	while ((j = (ft_putok(result, lsttetro, i, size))) != 1 && result[i + 1])
=======
	ft_putnbr(i);
	ft_putchar('\n');
	while ((j = (ft_putok(result, lsttetro, i, size))) != 1)
>>>>>>> b369d41a5721ff912296b1eb31738419738ae181
		i++;
	ft_putnbr(j);
	ft_putchar('\n');
	if (j == 0)
		return (0);
	if (ft_placetetro(result, lsttetro, i, size))
	{
		ft_putstr(result);
		ft_putchar('\n');
		return (i + 1);
<<<<<<< HEAD
	ft_putstr(result);
=======
	}
>>>>>>> b369d41a5721ff912296b1eb31738419738ae181
	return (0);
}
