/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprevel <tprevel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:01:33 by tprevel           #+#    #+#             */
/*   Updated: 2019/10/10 10:56:56 by tprevel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{
	int		i;
	char	*out;

	i = 0;
	out = s;
	while s[i]
	{
		if s[i] == (char)c
			out = s + i;
		i++;
	}
	if (char)c = '\0'
		return (s + i);
	return (out);
}
