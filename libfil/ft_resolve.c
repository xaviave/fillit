/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_resolve.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: llegros <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 12:55:32 by llegros      #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 15:02:39 by llegros     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
	if (!(tmp = (char*)malloc(sizeof(char) * (size * size + size + 1))))
		return ;
	while (size >= i)
	{
		result = ft_new_result(result, size);
		if (!(ft_algo(result, lsttetro, 0, size)))
			size = 0;
		else
		{
			ft_strcpy(tmp, result);
			size--;
		}
	}
	ft_putstr(tmp);
}
