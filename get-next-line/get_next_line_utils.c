/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 19:46:38 by xzhao             #+#    #+#             */
/*   Updated: 2019/11/17 16:31:26 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *cache)
{
	size_t	i;

	if (!cache)
		return (0);
	i = 0;
	while (cache[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *cache, char *buf, size_t size)
{
	size_t	len;
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len = ft_strlen(cache) + size;
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (0);
	while (cache && cache[i])
	{
		str[i] = cache[i];
		i++;
	}
	while (buf && buf[j])
	{
		str[i] = buf[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(const char *cache, unsigned int start, size_t len)
{
	char *str;
	char *cpy_str;
	char *ptr;

	if (!cache || !(str = (char*)malloc(sizeof(char) * len + 1)))
		return (0);
	if (start >= ft_strlen(cache))
		str[0] = '\0';
	else
	{
		ptr = (char*)cache + start;
		cpy_str = str;
		while (*ptr != '\0' && len-- > 0)
			*cpy_str++ = *ptr++;
		*cpy_str = '\0';
	}
	return (str);
}

int		ft_findn_index(char *cache)
{
	int	i;

	i = 0;
	while (cache[i] != '\0')
	{
		if (cache[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strzero(void)
{
	char *str;

	if (!(str = (char *)malloc(sizeof(char))))
		return (0);
	str[0] = '\0';
	return (str);
}
