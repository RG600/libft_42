/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:14:34 by rosgill           #+#    #+#             */
/*   Updated: 2019/02/25 14:14:37 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Scan memory for a character
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c2;
	size_t			i;
	unsigned char	*s2;
	void			*ptr;

	c2 = (unsigned char)c;
	s2 = (unsigned char *)s;
	i = 0;
	while (i != n && s2[i] != c2)
		i++;
	if (i == n)
		return (NULL);
	ptr = (void *)&s2[i];
	return (ptr);
}
