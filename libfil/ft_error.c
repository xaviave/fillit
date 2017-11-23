/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_error.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:42:44 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 15:12:53 by llegros     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libfil.h"

int		ft_parse_error(char *str, char *file)
{
	int i;

	if (!(i = ft_pcharerror(str)))
	{
		ft_error(3);
		return (0);
	}
	if (!(i = ft_shapeerror(str, file)))
	{
		ft_error(4);
		return (0);
	}
	return (1);
}

int		ft_pcharerror(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i])
	{
		if (((i == (20 + (21 * k)) && i != 0)))
			k++;
		if ((i + 1 - k) % 5 == 0 && i != 0 && str[i] != '\n')
			return (0);
		else if ((i == (20 + (21 * k))) && str[i] != '\n'
				&& str[i] != '\0' && i != 0)
			return (0);
		else if (str[i] != '.' && str[i] != '#' && (i - k) % 20 != 0
				&& (i + 1 - k) % 5 != 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_shapeerror(char *str, char *file)
{
	int len;

	len = ft_fd_len(file);
	if (!(ft_validnb(str, len)))
		return (0);
	if (!(ft_validshape(str, len)))
		return (0);
	return (1);
}

void	ft_error(int i)
{
	if (i == 1)
		ft_putstr_fd("error\n", 1);
	if (i == 2)
		ft_putstr_fd("error\n", 1);
	if (i == 3)
		ft_putstr_fd("error\n", 1);
	if (i == 4)
		ft_putstr_fd("error\n", 1);
}
