/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosgill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 13:49:29 by rosgill           #+#    #+#             */
/*   Updated: 2020/01/24 13:14:21 by rosgill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Write a function that converts the string argument str to an integer (type int) and returns it
int ft_atoi(const char *str)
{
	long int i = 0;
	long int final_num = 0;
	long int sign = 1;

	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
	{
		i++;
	}
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		final_num = final_num * 10 + str[i] - '0';
		i++;
	}
	if (sign == -1)
		final_num *= sign;
	return (final_num);
}
