/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 10:54:22 by rtracee           #+#    #+#             */
/*   Updated: 2021/04/23 11:00:43 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	char	a;
	char	b;

	a = ft_isalpha(c);
	b = ft_isdigit(c);
	if (a == 0 && b == 0)
		return (0);
	else
		return (7);
}