/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:38:58 by rosgill           #+#    #+#             */
/*   Updated: 2019/02/25 14:39:01 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Applies the function f to each character of the string given
//as argument to create a “fresh” new string
char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*result;

	i = 0;
	if (!s || !f || ((result = ft_strdup(s)) == NULL))
		return (NULL);
	while (result[i])
	{
		result[i] = f(result[i]);
		i++;
	}
	return (result);
}
