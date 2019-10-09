/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprevel <tprevel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:17:45 by tprevel           #+#    #+#             */
/*   Updated: 2019/10/09 15:36:23 by tprevel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	char *cpy
	int i;

	i = 0;
	if(!(cpy = malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	while (src[i])
		cpy[i] = src[i++];
	cpy[i] = '\0';
	return (cpy);
}