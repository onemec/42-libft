/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onemec <onemec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:23:09 by onemec            #+#    #+#             */
/*   Updated: 2020/02/22 10:32:58 by onemec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;
	size_t	i;

	if (!dst && !src)
		return (dst);
	cdst = (char *)dst;
	csrc = (char *)src;
	i = 0;
	if (csrc < cdst)
		while (++i <= len)
			cdst[len - i] = csrc[len - i];
	else
		while (len-- > 0)
			*(cdst++) = *(csrc++);
	return (dst);
}
