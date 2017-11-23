/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:41:56 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 15:33:25 by llegros     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./libfil/libfil.h"

int		main(int ac, char *av[])
{
	t_tetro	*lsttetro;

	if (ac != 2)
		return (0);
	if (!ft_checkfile(av[1]))
		return (0);
	lsttetro = ft_checkfile(av[1]);
	ft_resolve(lsttetro, 13);
	return (0);
}
