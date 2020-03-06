/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onemec <onemec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:26:11 by onemec            #+#    #+#             */
/*   Updated: 2020/02/21 18:55:18 by onemec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int curr_pos;
	int i;

	curr_pos = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[curr_pos] != '\0')
	{
		if (haystack[curr_pos] == needle[0])
		{
			i = 1;
			while (needle[i] != '\0' && haystack[curr_pos + i] == needle[i])
				i++;
			if (needle[i] == '\0')
				return ((char *)&haystack[curr_pos]);
		}
		curr_pos++;
	}
	return (0);
}
