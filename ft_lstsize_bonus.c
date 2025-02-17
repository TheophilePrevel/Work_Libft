/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprevel <tprevel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:29:52 by tprevel           #+#    #+#             */
/*   Updated: 2019/11/08 16:53:17 by tprevel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int out;

	out = 0;
	while (lst)
	{
		lst = lst->next;
		out++;
	}
	return (out);
}
