/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprevel <tprevel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:37:37 by tprevel           #+#    #+#             */
/*   Updated: 2019/10/09 11:21:57 by tprevel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dst;

	dst = b;
	if (b == NULL)
		return (b);
	while (len-- > 0)
		*dst++ = (unsigned char)c;
	return (b);
}
