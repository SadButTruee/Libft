/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 19:09:04 by rtracee           #+#    #+#             */
/*   Updated: 2021/04/22 21:40:56 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	o;
	size_t	d;

	o = 0;
	d = 0;
	while (o < n && d < n && s1[o] != 0 && s2[d] != 0)
	{
		if (s1[o] != s2[d])
			break ;
		o++;
		d++;
	}
	if (o == n && d ==n)
		return (0);
	return ((UC)s1[o] - (UC)s2[d]);
}
