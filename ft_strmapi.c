/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolmar <nicolmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:11:57 by draask            #+#    #+#             */
/*   Updated: 2024/10/30 11:10:19 by nicolmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*rep;

	i = 0;
	rep = ft_calloc(ft_strlen(s) + 1, 1);
	if (!rep)
		return (NULL);
	while (s[i])
	{
		rep[i] = f(i, s[i]);
		i++;
	}
	return (rep);
}
