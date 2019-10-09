/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprevel <tprevel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:38:23 by tprevel           #+#    #+#             */
/*   Updated: 2019/10/09 16:52:53 by tprevel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*new;

	i = 0;
	if (!(new = malloc(sizeof(char) * len)))
		return (NULL);
	while (s[start] && --len)
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}
