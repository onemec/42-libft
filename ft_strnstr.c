/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onemec <onemec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:25:51 by onemec            #+#    #+#             */
/*   Updated: 2020/02/21 20:58:37 by onemec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	curr_pos;
	size_t	i;

	curr_pos = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[curr_pos] != '\0' && curr_pos < len)
	{
		if (haystack[curr_pos] == needle[0])
		{
			i = 1;
			while (needle[i] != '\0' && haystack[curr_pos + i] == needle[i]
				&& (curr_pos + i) < len)
				i++;
			if (needle[i] == '\0')
				return ((char *)&haystack[curr_pos]);
		}
		curr_pos++;
	}
	return (0);
}
