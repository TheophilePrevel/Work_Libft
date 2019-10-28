/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprevel <tprevel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:36:16 by tprevel           #+#    #+#             */
/*   Updated: 2019/10/28 17:56:35 by tprevel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	void	*out;

	if (!(out = malloc(count * size)))
		return (NULL);
	ft_bzero(out, count * size);
	return (out);
}
