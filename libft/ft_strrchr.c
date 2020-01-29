/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:18:12 by rosgill           #+#    #+#             */
/*   Updated: 2020/01/24 14:38:59 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Locate character in string
char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (c == '\0')
		return (char *)(&s[ft_strlen(s)]);
	if (i != 0)
	{
		while (s[i] != (char)c && i != 0)
			i--;
		if (s[i] == (char)c)
			return (char *)(&s[i]);
	}
	return (NULL);
}
