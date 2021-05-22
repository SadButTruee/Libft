/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 10:33:55 by rtracee           #+#    #+#             */
/*   Updated: 2021/04/27 20:49:32 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_kolvo(char *str, char c)
{
	int		count;
	char	*b;

	count = 0;
	b = str;
	while (*b)
	{
		while (*b && *b == c)
			b++;
		if (*b && *b != c)
		{
			count++;
			while (*b && *b != c)
				b++;
		}
	}
	return (count);
}

static char	*ft_kp(char *dst, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

static char	**ft_delt(char **mas)
{
	int	i;

	i = 0;
	while (mas[i])
	{
		free(mas[i]);
		i++;
	}
	free(mas);
	return (NULL);
}

static char	**ft_podstr(char *str, char **mas, char c)
{
	int		x;
	int		y;
	char	*z;

	x = 0;
	while (*str)
	{
		y = 0;
		while (*str && *str == c)
			str++;
		while (*(str + y) && *(str + y) != c)
			y++;
		if (*str && *str != c)
		{
			z = (char *)malloc(sizeof(char) * (y + 1));
			if (!z)
				return (ft_delt(mas));
			ft_kp(z, str, y);
			mas[x++] = z;
			while (*str && *str != c)
				str++;
		}
	}
	mas[x] = NULL;
	return (mas);
}

char	**ft_split(char const *s, char c)
{
	char	**mas;
	int		n;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	n = ft_kolvo((char *)s, c);
	mas = (char **)malloc(sizeof(char *) * (n + 1));
	if (!mas)
		return (NULL);
	while (i < (n + 1))
	{
		mas[i] = NULL;
		i++;
	}
	mas = ft_podstr((char *)s, mas, c);
	return (mas);
}
