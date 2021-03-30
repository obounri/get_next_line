/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 20:02:36 by obounri           #+#    #+#             */
/*   Updated: 2020/01/29 20:02:44 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);
int		ft_strlen(const char *str);
void	*ft_memccpy(void *dst, const void *src, int c, int n);
int		ft_strlcpy(char *dst, const char *src, int c);
char	*ft_strdup(const char *s1);
char	*join_char(char **line, const char *cache, int *i);

#endif
