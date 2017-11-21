/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:04:05 by llegros           #+#    #+#             */
/*   Updated: 2017/11/21 16:15:48 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

int		ft_algo(char *result, t_tetro *lsttetro, int i, int size)
{
	if ((i = ft_puttetro(result, lsttetro, i, size)))
	{
		if (lsttetro->next == NULL)
			return (1);
		return (ft_algo(result, lsttetro->next, 0, size)
				|| ft_algo(result, lsttetro, (i + 1), size));
	}
	return (0);
}
