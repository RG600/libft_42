/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:31:03 by rosgill           #+#    #+#             */
/*   Updated: 2019/02/25 14:31:07 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Allocates (with malloc(3)) and returns a “fresh” memory
//area. The memory allocated is initialized to 0
void	*ft_memalloc(size_t size)
{
	void *nptr;

	nptr = (void *)malloc(size);
	if (nptr == NULL)
		return (NULL);
	ft_bzero(nptr, size);
	return (nptr);
}
