/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:51:46 by rosgill           #+#    #+#             */
/*   Updated: 2019/02/25 14:51:49 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Outputs the string s to the standard output.
void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	while (s[i])
		ft_putchar(s[i++]);
}
