/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:36:02 by rosgill           #+#    #+#             */
/*   Updated: 2019/02/25 14:36:07 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Takes as a parameter the address of a memory area that needs
//to be freed with free(3), then puts the pointer to NULL.
void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
