/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttetro.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:20:19 by llegros           #+#    #+#             */
/*   Updated: 2017/11/20 18:01:55 by llegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

int		ft_puttetro(char *result, t_tetro *lsttetro, int i, int size)
{
	while (ft_putok(result, lsttetro, i, size) != 1)
		i++;
	if (ft_placetetro(result, lsttetro, i, size))
		return (1);
	return (0);
}
