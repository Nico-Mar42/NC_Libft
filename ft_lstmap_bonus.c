/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolmar <nicolmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:16:20 by nicolmar          #+#    #+#             */
/*   Updated: 2024/10/30 11:10:19 by nicolmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*init;
	t_list	*new;
	void	*newcontent;

	if (!f ||!del || !lst)
		return (NULL);
	init = NULL;
	while (lst)
	{
		newcontent = (*f)(lst->content);
		new = ft_lstnew(newcontent);
		if (!new)
			(*del)(newcontent);
		ft_lstadd_back(&init, new);
		lst = lst->next;
	}
	ft_lstclear((t_list **)lst, del);
	return (init);
}
