/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libfil.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:48:13 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 15:22:34 by llegros     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFIL_H
# define LIBFIL_H

# include "../libft/libft.h"
# include <fcntl.h>
# define BUF_SIZE 1

typedef struct		s_tetro
{
	char			*forme;
	char			position;
	struct s_tetro	*next;
}					t_tetro;

void				ft_error(int i);
int					ft_fd_len(char *file);
char				*ft_shape(int i, int j, int k, int l);
char				*ft_fd_to_str(int tabsize, char *file);
int					ft_parse_error(char *str, char *file);
int					ft_pcharerror(char *str);
int					ft_shapeerror(char *str, char *file);
int					ft_validnb(char *str, int len);
int					ft_validshape(char *str, int len);
int					ft_checkarround(char *str, int i, int k);
t_tetro				*ft_sorttetro(char *str, int nbtetro);
t_tetro				*ft_idintetro(int *hashid, int nbtetro);
t_tetro				*ft_newtetro(int i, int j, int k, int l);
t_tetro				*ft_checkfile(char *file);
void				ft_resolve(t_tetro *lsttetro, int size);
int					ft_algo(char *result, t_tetro *lsttetro, int i, int size);
int					ft_putok(char *result, t_tetro *lsttetro, int i, int size);
int					ft_putok6(char *result, t_tetro *lsttetro, int i, int size);
int					ft_placetetro(char *result, t_tetro *lsttetro, int i,
		int size);
int					ft_placetetro6(char *result, t_tetro *lsttetro,
		int i, int size);
int					ft_puttetro(char *result, t_tetro *lsttetro,
		int i, int size);
void				ft_erase(char *result, t_tetro *lsttetro, int size);

#endif
