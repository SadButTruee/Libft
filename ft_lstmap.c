/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 18:31:42 by rtracee           #+#    #+#             */
/*   Updated: 2021/04/27 21:49:02 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*s;
	t_list	*sar;

	if (!f || !del)
		return (NULL);
	s = NULL;
	while (lst)
	{
		sar = ft_lstnew((*f)(lst->content));
		if (!sar)
		{
			while (s)
			{
				sar = s->next;
				(*del)(s->content);
				free(s);
				s = sar;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&s, sar);
		lst = lst->next;
	}
	return (s);
}
