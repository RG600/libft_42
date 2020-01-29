/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:14:09 by rosgill           #+#    #+#             */
/*   Updated: 2019/02/27 13:33:28 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copy memory area
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src2;
	char	*dstt;
	char	*srcc;
	size_t	i;

	if (len <= 0 || !(src2 = ft_memalloc(len)))
		return (dst);
	i = 0;
	dstt = dst;
	srcc = (char *)src;
	while (i < len)
	{
		src2[i] = srcc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dstt[i] = src2[i];
		i++;
	}
	return (dst);
}
