/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:39:43 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:39:43 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n)
{
	int i;

	i = 1;
	if (n == -0)
		return (i);
	if (n < 0)
	{
		i += 1;
		n *= -1;
	}
	while (n / 10 >= 10)
	{
		i++;
		n /= 10;
	}
	if (n >= -9 && n <= 9)
		i--;
	return (i + 1);
}

static void	intinchar(char *fresh, int i, int cpn, int n)
{
	while (i >= 0)
	{
		if (i == 0 && n < 0)
		{
			fresh[i] = '-';
		}
		else
		{
			fresh[i] = (cpn % 10) + '0';
			cpn = cpn / 10;
		}
		i--;
	}
}

char		*ft_itoa(int n)
{
	char	*fresh;
	int		tmp;
	int		len;
	int		i;

	len = intlen(n);
	if (!(fresh = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	tmp = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == -0)
		return (ft_strdup("0"));
	i = len;
	fresh[i] = '\0';
	i--;
	if (n < 0)
		tmp = -n;
	intinchar(fresh, i, tmp, n);
	return (fresh);
}
