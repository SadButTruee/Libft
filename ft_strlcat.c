/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:17:49 by rtracee           #+#    #+#             */
/*   Updated: 2021/04/20 20:44:30 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t s)
{
	size_t	c1;
	size_t	c2;
	size_t	c3;

	c1 = 0;
	c2 = 0;
	c3 = 0;
	while (src[c1] != 0)
		c1++;
	while (dst[c2] && c2 < s)
		c2++;
	if (s == c2)
		return (c2 + c1);
	while (s && (--s - c2) && src[c3] != 0)
	{
		dst[c2 + c3] = src[c3];
		c3++;
	}
	dst[c2 + c3] = 0;
	return (c2 + c1);
}
