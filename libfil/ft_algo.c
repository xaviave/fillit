/* ************************************************************************** */
<<<<<<< HEAD
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_algo.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:43:52 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 12:37:37 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
=======
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:04:05 by llegros           #+#    #+#             */
/*   Updated: 2017/11/22 18:20:48 by llegros          ###   ########.fr       */
/*                                                                            */
>>>>>>> b369d41a5721ff912296b1eb31738419738ae181
/* ************************************************************************** */

#include "libfil.h"

int		ft_algo(char *result, t_tetro *lsttetro, int i, int size)
{
	if (i != 0)
<<<<<<< HEAD
		ft_erase(result, lsttetro, size);
=======
		ft_erase(result, lsttetro);
>>>>>>> b369d41a5721ff912296b1eb31738419738ae181
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
