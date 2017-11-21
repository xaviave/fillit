/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 12:32:22 by llegros           #+#    #+#             */
/*   Updated: 2017/11/21 14:22:28 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libfil/libfil.h"

int		main(int ac, char *av[])
{
	t_tetro	*lsttetro;
	if (ac != 2)
		return (0);
	lsttetro = ft_checkfile(av[1]);
	ft_resolve(lsttetro, 13);
	return (0);
}
