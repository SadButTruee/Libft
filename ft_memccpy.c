/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:35:20 by rtracee           #+#    #+#             */
/*   Updated: 2021/04/26 12:59:37 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	UC			*sar;
	const UC	*mat;
	size_t		i;
	UC			s;

	sar = dst;
	mat = src;
	i = 0;
	s = c;
	while (i < n)
	{
		sar[i] = mat[i];
		if (sar[i] == s)
			    return (++sar + i);
		i++;
	}
	return (NULL);
}
