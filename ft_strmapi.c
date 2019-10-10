/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprevel <tprevel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:21:53 by tprevel           #+#    #+#             */
/*   Updated: 2019/10/10 14:27:58 by tprevel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*out;
	int		i;

	i = 0;
	if (!(out = malloc(sizeof(char) * (1 + ft_strlen(s)))))
		return (NULL);
	while (s[i])
		out[i] = f(s[i]);
	out[i] = '\0';
	return (out);
}