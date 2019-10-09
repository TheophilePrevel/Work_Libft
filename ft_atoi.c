/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprevel <tprevel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:47:11 by tprevel           #+#    #+#             */
/*   Updated: 2019/10/09 11:43:57 by tprevel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int		atoi(const char *str)
{
	int i;
	int sign;
	int nb;

	b = 0;
	sign = 1;
	i = 0;
	while (str[i] && ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' '))
		i++;
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
