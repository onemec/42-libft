/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onemec <onemec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:24:22 by onemec            #+#    #+#             */
/*   Updated: 2020/02/21 18:55:18 by onemec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		i;

	res = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	res = (char*)malloc((i + 1) * sizeof(char));
	if (!res)
		return (0);
	else
	{
		res[i + 1] = '\0';
		while (i >= 0)
		{
			res[i] = s1[i];
			i--;
		}
	}
	return (res);
}
