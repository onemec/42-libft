/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onemec <onemec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 10:50:19 by onemec            #+#    #+#             */
/*   Updated: 2020/02/23 14:23:59 by onemec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ret;
	size_t	i;

	i = 0;
	if (!(ret = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	while (i <= size)
	{
		ret[i] = 0;
		i++;
	}
	return (ret);
}
