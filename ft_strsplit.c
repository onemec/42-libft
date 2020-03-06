/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onemec <onemec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 10:50:21 by onemec            #+#    #+#             */
/*   Updated: 2020/02/24 04:21:41 by onemec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wc(const char *str, char c)
{
	int word;

	word = 0;
	if (*str != c && *str)
	{
		str++;
		word++;
	}
	while (*str)
	{
		while (*str == c)
		{
			str++;
			if (*str != c && *str)
				word++;
		}
		str++;
	}
	return (word);
}

static int		ft_len(const char *str, char c)
{
	int count;

	count = 0;
	while (*str != c && *str)
	{
		count++;
		str++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	int		j;
	int		i;
	char	**res;

	j = 0;
	i = 0;
	if (!s || (!(res = (char **)malloc(sizeof(char *) * (ft_wc(s, c) + 1)))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			if (!(res[j] = (char *)malloc(sizeof(char) * (ft_len(s, c) + 1))))
				return (NULL);
			while (*s && *s != c)
				res[j][i++] = (char)*s++;
			res[j][i] = '\0';
			j++;
			i = 0;
		}
	}
	res[j] = NULL;
	return (res);
}
