/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:21:40 by rtracee           #+#    #+#             */
/*   Updated: 2021/04/27 21:10:34 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_udnac(char const *str, char s)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char *s1, char const *set)
{
	size_t	nachalo;
	size_t	konec;
	size_t	a;
	char	*s3;

	if (s1 == NULL || set == NULL)
		return (NULL);
	a = 0;
	nachalo = 0;
	konec = ft_strlen(s1);
	while (s1[nachalo] && ft_udnac(set, s1[nachalo]))
		nachalo++;
	while (konec > nachalo && ft_udnac(set, s1[konec - 1]))
		konec--;
	s3 = malloc(konec - nachalo + 1);
	if (s3 == NULL)
		return (NULL);
	while (nachalo < konec)
	{
		s3[a++] = s1[nachalo++];
	}
	s3[a] = '\0';
	return (s3);
}
