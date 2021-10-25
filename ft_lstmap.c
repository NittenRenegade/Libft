/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@il-c2.msk.21-school.ru> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:15:10 by coskelet          #+#    #+#             */
/*   Updated: 2021/10/25 16:32:22 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_cur;

	new_list = NULL;
	new_cur = new_list;
	while (lst)
	{
		ft_lstadd_back(&new_cur, ft_lstnew((*f)(lst->content)));
		new_cur = new_cur->next;
		ft_lstdelone(lst, del);
	}
}
