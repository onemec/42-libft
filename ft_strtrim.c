/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onemec <onemec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 10:50:26 by onemec            #+#    #+#             */
/*   Updated: 2020/03/02 11:27:57 by onemec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*sdup;
	int		i;

	if (!s || !(sdup = ft_strdup((char *)s)))
		return (NULL);
	while (ft_iswhitespace(*sdup))
		sdup++;
	i = ft_strlen(sdup) - 1;
	while (ft_iswhitespace(sdup[i]))
		i--;
	sdup[i + 1] = 0;
	sdup = ft_strdup(sdup);
	return (sdup);
}
