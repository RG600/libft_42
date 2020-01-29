/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:18:33 by rosgill           #+#    #+#             */
/*   Updated: 2020/01/24 14:26:56 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The strstr() function locates the first occurrence of the null-terminated string needle in the null-terminated string haystack.
char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*h;
	char	*n;
	size_t	len;

	h = (char *)haystack;
	n = (char *)needle;
	len = ft_strlen(n);
	if (!len)
		return (h);
	while (*h)
	{
		if (!ft_strncmp(h, n, len))
			return (h);
		h++;
	}
	return ((char *)NULL);
}
