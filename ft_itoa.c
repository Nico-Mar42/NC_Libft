/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolmar <nicolmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 10:57:42 by draask            #+#    #+#             */
/*   Updated: 2024/10/31 16:36:10 by nicolmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	cntchar(int n)
{
	int	mod;
	int	rep;

	mod = n;
	rep = 0;
	if (n < 0)
	{
		mod = -mod;
		rep++;
	}
	while (mod >= 10)
	{
		mod = mod / 10;
		rep++;
	}
	return (rep);
}

char	*intmin(void)
{
	char	*rep;

	rep = ft_calloc(12, 1);
	if (!rep)
		return (NULL);
	ft_strlcpy(rep, "-2147483648", 12);
	return (rep);
}

char	*ft_itoa(long n)
{
	int		len;
	int		temp;
	char	*rep;

	if (n == -2147483648)
		return (intmin());
	len = cntchar(n);
	rep = ft_calloc(len + 2, 1);
	if (!rep)
		return (NULL);
	temp = n;
	if (temp < 0)
		temp = temp * -1;
	while (len >= 0)
	{
		if (n < 0 && len == 0)
			rep[len] = '-';
		if (rep[len] != '-')
			rep[len] = (temp % 10) + 48;
		len--;
		temp = temp / 10;
	}
	return (rep);
}
