/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onemec <onemec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 10:57:16 by onemec            #+#    #+#             */
/*   Updated: 2020/03/06 14:18:49 by onemec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long	number;
	size_t	len;
	char	*str;

	number = n;
	len = (number > 0) ? 0 : 1;
	number = (number > 0) ? number : -number;
	while (n)
		n = len++ ? n / 10 : n / 10;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	*(str + len--) = '\0';
	while (number > 0)
	{
		*(str + len--) = number % 10 + '0';
		number /= 10;
	}
	if (len == 0 && str[1] == '\0')
		*(str + len) = '0';
	if (len == 0 && str[1] != '\0')
		*(str + len) = '-';
	return (str);
}
