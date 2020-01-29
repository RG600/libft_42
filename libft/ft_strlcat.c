/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:17:34 by rosgill           #+#    #+#             */
/*   Updated: 2019/02/28 16:43:21 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Size-bounded string copying and concatenation
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t src_len;
	size_t dst_len;

	src_len = ft_strlen(src);
	i = 0;
	while (i < dstsize && dst[i])
		i++;
	if (i == dstsize)
		return (i + src_len);
	dst_len = i;
	j = 0;
	while (i + 1 < dstsize && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
