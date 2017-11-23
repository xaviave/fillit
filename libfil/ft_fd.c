/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_fd.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 12:06:55 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 15:24:57 by llegros     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libfil.h"

int			ft_fd_len(char *file)
{
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		i;
	int		fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	i = 0;
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		i++;
	}
	return (i);
}

char		*ft_fd_to_str(int tabsize, char *file)
{
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		i;
	char	*strfd;
	int		fd;

	i = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	if (!(strfd = (char*)malloc(sizeof(char) * tabsize + 1)))
		return (NULL);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		strfd[i] = buf[ret - 1];
		i++;
	}
	strfd[i] = '\0';
	if (close(fd) == -1)
		return (NULL);
	return (strfd);
}

t_tetro		*ft_checkfile(char *file)
{
	int		fdsize;
	char	*str;

	if (!(fdsize = ft_fd_len(file)))
	{
		ft_error(1);
		return (0);
	}
	if ((fdsize - 20) % 21 != 0)
	{
		ft_error(2);
		return (0);
	}
	if (!(str = ft_fd_to_str(fdsize, file)))
	{
		ft_error(1);
		return (0);
	}
	if (!(ft_parse_error(str, file)))
		return (0);
	return (ft_sorttetro(str, 1 + ((fdsize - 20) / 21)));
}
