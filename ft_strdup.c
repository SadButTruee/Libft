/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:33:05 by rtracee           #+#    #+#             */
/*   Updated: 2021/04/23 15:33:33 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s;
	char	*s2;

	s = ft_strlen(s1);
	s2 = malloc(s + 1);
	if (s2 == NULL)
		return (NULL);
	s = 0;
	while (s1[s] != '\0')
	{
		s2[s] = s1[s];
		s++;
	}
	s2[s] = '\0';
	return (s2);
}
