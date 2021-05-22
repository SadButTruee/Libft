/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:47:16 by rtracee           #+#    #+#             */
/*   Updated: 2021/04/20 20:44:26 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (0);
	if (dst > src)
	{
		while (len > 0)
		{
			((UC *)dst)[len - 1] = ((UC *) src)[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			((UC *)dst)[i] = ((UC *)src)[i];
			i++;
		}
	}
	return (dst);
}
