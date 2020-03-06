/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onemec <onemec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 10:50:11 by onemec            #+#    #+#             */
/*   Updated: 2020/02/22 22:40:19 by onemec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = -1;
	if (!s || !f)
		return (0);
	if (!(str = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1)))
		return (0);
	while (s[++i])
		str[i] = f(s[i]);
	str[i] = '\0';
	return (str);
}
