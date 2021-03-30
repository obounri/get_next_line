/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:38:49 by obounri           #+#    #+#             */
/*   Updated: 2020/01/29 20:01:53 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_strlen(const char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

void		*ft_memccpy(void *dst, const void *src, int c, int n)
{
	unsigned char	*src1;
	unsigned char	*dst1;
	int				i;

	src1 = (unsigned char*)src;
	dst1 = (unsigned char*)dst;
	i = 0;
	while (i < n)
	{
		dst1[i] = src1[i];
		if (src1[i] == (unsigned char)c)
			dst1[i] = src1[i];
		i++;
	}
	return (dst1);
}

int			ft_strlcpy(char *dst, const char *src, int c)
{
	int i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (i < (int)c - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (c > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

char		*ft_strdup(const char *s1)
{
	char	*cpy;
	int		size;
	int		i;
	char	*s2;

	s2 = (char*)s1;
	i = 0;
	size = ft_strlen(s1);
	if (s1 == NULL)
		return (0);
	if (!(cpy = (char*)malloc(size + 1)))
		return ((char*)0);
	ft_strlcpy(cpy, s2, size + 1);
	return (cpy);
}

char		*join_char(char **line, const char *cache, int *i)
{
	char	*str;
	int		n;
	int		len;

	n = 0;
	len = ft_strlen(*line) + ft_strlen(cache) + 1;
	if (!(str = (char *)malloc(len * sizeof(char))))
		return (NULL);
	if (*line)
	{
		while ((*line)[n])
		{
			str[n] = (*line)[n];
			n++;
		}
		while (cache[*i] && cache[*i] != '\n')
		{
			str[n] = cache[*i];
			n++;
			*i = *i + 1;
		}
	}
	str[n] = '\0';
	free(*line);
	return (str);
}
