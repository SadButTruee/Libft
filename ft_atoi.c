/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 21:43:03 by rtracee           #+#    #+#             */
/*   Updated: 2021/04/22 21:58:16 by rtracee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	n;
	int	s;
	int	z;

	n = 0;
	z = 1;
	s = 0;
	while ((str [s] == ' ') || (str[s] >= 9 && str[s] <= 13))
	{
		s++;
	}
	if (str[s] == '-' || str[s] == '+')
	{
		if (str[s] == '-')
			z = -z;
		s++;
	}
	while (str[s] >= '0' && str[s] <= '9')
	{
		n = n * 10 + (str[s] - 48);
		s++;
	}
	return (n * z);
}