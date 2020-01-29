/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:49:53 by rosgill           #+#    #+#             */
/*   Updated: 2019/02/25 14:49:59 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’, result of the concatenation of s1 and s2.
char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*result;

	result = NULL;
	if (str1 == 0 || str2 == 0)
		return (NULL);
	result = ft_strnew(ft_strlen(str1) + ft_strlen(str2));
	if (result)
	{
		ft_strcpy(result, str1);
		ft_strcat(result, str2);
		return (result);
	}
	else
		return (NULL);
}
