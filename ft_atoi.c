/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onemec <onemec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:17:55 by onemec            #+#    #+#             */
/*   Updated: 2020/03/02 11:26:46 by onemec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	out;
	int	neg;
	int	index;

	out = 0;
	neg = 1;
	index = 0;
	while ((str[index] >= 8 && str[index] <= 13) || str[index] == 32)
		index++;
	if (str[index] == '-')
		neg = -1;
	if (str[index] == '-' || str[index] == '+')
		index++;
	while (str[index] >= '0' && str[index] <= '9')
	{
		out = out * 10 + (str[index] - '0');
		index++;
	}
	return (out * neg);
}
