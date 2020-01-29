/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:08:15 by rosgill           #+#    #+#             */
/*   Updated: 2019/02/25 14:12:44 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Fill memory with a constant byte
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	c2;
	size_t			i;
	char			*b2;

	c2 = (unsigned char)c;
	i = 0;
	b2 = (char *)b;
	while (i != len)
		b2[i++] = c2;
	return (b);
}
