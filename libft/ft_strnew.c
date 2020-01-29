/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:36:23 by rosgill           #+#    #+#             */
/*   Updated: 2019/02/25 14:36:32 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’. 
char	*ft_strnew(size_t size)
{
	char	*nstr;
	size_t	i;

	nstr = (char *)malloc(sizeof(*nstr) * size + 1);
	if (nstr == NULL)
		return (NULL);
	i = 0;
	while (nstr[i])
	{
		nstr[i] = '\0';
		i++;
	}
	return (nstr);
}
