/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onemec <onemec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:20:22 by onemec            #+#    #+#             */
/*   Updated: 2020/02/21 18:55:18 by onemec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*cs;

	i = 0;
	cs = (char *)s;
	while (i < n)
	{
		if (cs[i] == (char)c)
			return ((void *)&cs[i]);
		i++;
	}
	return (0);
}
