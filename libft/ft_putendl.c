/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 14:52:13 by rosgill           #+#    #+#             */
/*   Updated: 2019/02/25 14:52:16 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Outputs the string s to the standard output followed by a ’\n’.
void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
