/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 17:30:00 by rtracee           #+#    #+#             */
/*   Updated: 2021/04/24 21:50:11 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_kolvo(int n)
{
	int		i;
	long	s;

	i = 0;
	s = n;
	if (s < 0)
	{
		s *= -1;
		i++;
	}
	while (s >= 10)
	{
		s /= 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*sar;
	int		a;
	long	b;

	b = n;
	a = ft_kolvo(b);
	sar = malloc(ft_kolvo(b) + 1);
	if (sar == NULL)
		return (NULL);
	if (n < 0)
		sar[0] = '-';
	if (b < 0)
		b = -b;
	sar[a] = '\0';
	a--;
	while (b >= 10)
	{
		sar[a] = b % 10 + 48;
		b /= 10;
		a--;
	}
	sar[a] = b % 10 + 48;
	return (sar);
}
