/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 10:57:42 by grannou           #+#    #+#             */
/*   Updated: 2021/02/24 10:57:53 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

/*
** define a default buffer size if not mentionned in compilation command
*/

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

int		get_next_line(int fd, char **line);

int		ft_has_newline(char *str);
int		ft_find_newline_index(char *str);
int		ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
