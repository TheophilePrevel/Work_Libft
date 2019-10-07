/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprevel <tprevel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:47:11 by tprevel           #+#    #+#             */
/*   Updated: 2019/10/07 16:09:09 by tprevel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(const char str)
{
	return ((str >= '\t' && str <= '\r') || str == ' ');
}

int		atoi(const char *str)
{
	int i;
	int sign;
	int nb;

	nb = 0;
	sign = 1;
	i = 0;
	while (str[i] && ft_isspace(str))
		i++
	if (str[i] && (str[i] == '+' || str[i] = '-'))
	{
		if str[i] == '-'
			sign = -1;
		i++;
	}
	while (ft_isdigit(str))
		nbr = nbr * 10 + str[i++] - '0';
	return (nbr * sign)
}
