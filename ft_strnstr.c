/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 13:54:44 by rtracee           #+#    #+#             */
/*   Updated: 2021/04/22 19:06:14 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *ha, const char *ne, size_t len)
{
	size_t	n;
	size_t	h;

	h = 0;
	if (ne[0] == 0)
		return ((char *)ha);
	if (ft_strlen(ne) == 0)
		return (NULL);
	while (ha[h] && h < len)
	{
		n = 0;
		if (ne[n] == ha[h])
		{
			if (ft_memcmp(((UC *)ha) + h, ((UC *)ne) + n, ft_strlen(ne)) == 0)
			{
				if (h + ft_strlen(ne) > len)
					return (NULL);
				return (((char *)ha) + h);
			}
		}
		h++;
	}
	return (NULL);
}
