/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@il-c2.msk.21-school.ru> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:15:10 by coskelet          #+#    #+#             */
/*   Updated: 2021/10/25 20:23:07 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_cur;
	t_list	*tmp;

	new_list = NULL;
	new_cur = NULL;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (!tmp)
		{
			ft_lstclear(&new_cur, del);
			return (NULL);
		}
		ft_lstadd_back(&new_cur, tmp);
		if (!new_list)
			new_list = new_cur;
		lst = lst->next;
	}
	return (new_list);
}
