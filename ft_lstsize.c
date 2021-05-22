/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:24:52 by rtracee           #+#    #+#             */
/*   Updated: 2021/04/27 21:28:32 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*n;
	int		i;

	n = lst;
	i = 0;
	if (lst == NULL)
		return (0);
	while (n->next != NULL)
	{
		n = n->next;
		i++;
	}
	return (i + 1);
}
