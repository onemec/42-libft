/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onemec <onemec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:20:08 by onemec            #+#    #+#             */
/*   Updated: 2020/02/21 18:55:18 by onemec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
	int c, size_t n)
{
	size_t			i;
	unsigned char	*cdst;
	unsigned char	*csrc;

	i = 0;
	cdst = dst;
	csrc = (unsigned char *)src;
	while (i < n)
	{
		cdst[i] = csrc[i];
		if (cdst[i] == (unsigned char)c)
			return ((void *)(dst + i + 1));
		i++;
	}
	return (0);
}
