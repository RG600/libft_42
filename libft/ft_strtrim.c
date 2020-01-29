/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:50:18 by rosgill           #+#    #+#             */
/*   Updated: 2020/01/24 14:14:52 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Returns a copy of the string given as argument without whitespaces at the beginning or at the end of the string.
char	*ft_strtrim(const char *s)
{
	char	*nstr;
	size_t	i;
	size_t	j;

	if (s == NULL || !s)
		return (char *)(s);
	i = 0;
	j = 0;
	if ((nstr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))) == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i] != '\0')
	{
		nstr[j] = s[i];
		j++;
		i++;
	}
	while (nstr[j - 1] == ' ' || nstr[j - 1] == '\n' || nstr[j - 1] == '\t')
	{
		nstr[j - 1] = '\0';
		j--;
	}
	nstr[j] = '\0';
	return (nstr);
}
