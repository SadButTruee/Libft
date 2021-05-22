/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:29:06 by rtracee           #+#    #+#             */
/*   Updated: 2021/04/19 20:00:44 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t n)
{
	unsigned char		*sar;
	const unsigned char	*mat;

	sar = dest;
	mat = source;
	if (sar == NULL && mat == NULL)
		return (0);
	while (n > 0)
	{
		sar[n - 1] = mat[n - 1];
		n--;
	}
	return (sar);
}
