/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:35:54 by rtracee           #+#    #+#             */
/*   Updated: 2021/04/27 18:14:14 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	a;
	size_t	b;
	char	*s3;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	a = 0;
	b = 0;
	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s3 == NULL)
		return (NULL);
	while (a < ft_strlen(s1))
	{
		s3[a] = s1[a];
		a++;
	}
	while (b < ft_strlen(s2))
	{
		s3[a] = s2[b];
		b++;
		a++;
	}
	s3[a] = '\0';
	return (s3);
}
