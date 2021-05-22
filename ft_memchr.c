/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 10:39:57 by rtracee           #+#    #+#             */
/*   Updated: 2021/04/20 12:26:46 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	UC		a;
	size_t	i;

	a = c;
	i = 0;
	while (i < n)
	{
		if (((UC *)s)[i] == a)
			return (((UC *)s) + i);
		i++;
	}
	return (NULL);
}
