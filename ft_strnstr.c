/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprevel <tprevel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:03:16 by tprevel           #+#    #+#             */
/*   Updated: 2019/10/09 10:15:45 by tprevel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int to_find_len;
	unsigned int i;

	needle_len = ft_strlen(needle);
	i = 0;
	if (needle_len == 0)
		return (haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
			return (&haystack[i]);
		i++;
	}
	return (0);
}
