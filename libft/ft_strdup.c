/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:15:35 by rosgill           #+#    #+#             */
/*   Updated: 2019/02/25 14:15:38 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Duplicate a string
char	*ft_strdup(const char *s1)
{
	int		i;
	char	*nstr;

	nstr = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (s1[i])
		{
			nstr[i] = s1[i];
			i++;
		}
		nstr[i] = '\0';
		return (nstr);
	}
}
