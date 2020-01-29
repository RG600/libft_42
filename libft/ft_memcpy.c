/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:13:11 by rosgill           #+#    #+#             */
/*   Updated: 2019/02/26 12:33:04 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copy memory area
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst2;
	unsigned char	*src2;

	if (!n)
		return (dst);
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (n--)
	{
		*dst2++ = *src2++;
	}
	return (dst);
}
