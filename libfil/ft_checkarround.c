/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkarround.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:42:35 by llegros           #+#    #+#             */
/*   Updated: 2017/11/16 17:03:55 by llegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	checktop(char *str, int i)
{
	if (str[i - 5] == '#')
		return (1);
	return (0);
}

static int	checkbot(char *str, int i)
{
	if (str[i + 5] == '#')
		return (1);
	return (0);
}

static int	checkleft(char *str, int i)
{
	if (str[i - 1] == '#')
		return (1);
	return (0);
}

static int	checkright(char *str, int i)
{
	if (str[i + 1] == '#')
		return (1);
	return (0);
}

int			ft_checkarround(char *str, int i, int k)
{
	int j;

	j = 0;
	if ((i - k + 2) % 5 != 0)
		j += checkright(str, i);
	if ((i - k) % 5 != 0)
		j += checkleft(str, i);
	if ((k * 21) + 15 != i && (k * 21) + 16 != i && (k * 21) + 17 != i
			&& (k * 21) + 18 != i)
		j += checkbot(str, i);
	if ((k * 21) != i && (k * 21) + 1 != i && (k * 21) + 2 != i
			&& (k * 21) + 3 != i)
		j += checktop(str, i);
	return (j);
}
