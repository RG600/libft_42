/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:38:04 by rosgill           #+#    #+#             */
/*   Updated: 2019/02/25 14:38:09 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Applies the function f to each character of the string passed as argument.
void	ft_striter(char *s, void (*f)(char *))
{
	if (!f)
		return ;
	while (s && *s)
	{
		f(s);
		s++;
	}
}
