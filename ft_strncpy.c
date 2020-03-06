/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onemec <onemec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:25:37 by onemec            #+#    #+#             */
/*   Updated: 2020/02/22 23:32:35 by onemec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (src[i] != '\0' && (size_t)i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while ((size_t)i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
