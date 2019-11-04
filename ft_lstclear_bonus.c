/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprevel <tprevel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:59:34 by tprevel           #+#    #+#             */
/*   Updated: 2019/11/04 16:34:16 by tprevel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list tmp;
	tmp = lst;

	while (lst)
	{
		tmp = lst->next;
		ft_lstdelone(lst, del);
		lst = tmp;
	}
	*lst = NULL;
}
