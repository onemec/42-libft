/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onemec <onemec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 10:50:08 by onemec            #+#    #+#             */
/*   Updated: 2020/02/21 18:55:18 by onemec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	if (!(newstr = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (0);
	i = -1;
	while (++i < ft_strlen(s1))
		newstr[i] = s1[i];
	j = -1;
	while (++j < ft_strlen(s2))
		newstr[i++] = s2[j];
	return (newstr);
}
