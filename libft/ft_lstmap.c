/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:46:19 by diomarti          #+#    #+#             */
/*   Updated: 2022/11/08 13:46:19 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mem;
	t_list	*new_lst;

	new_lst = 0;
	if (!lst)
		return (NULL);
	while (lst)
	{
		mem = ft_lstnew(f(lst->content));
		if (!mem)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, mem);
		lst = lst->next;
	}
	return (new_lst);
}
