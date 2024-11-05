/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolmar <nicolmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:08:30 by nicolmar          #+#    #+#             */
/*   Updated: 2024/10/30 11:10:19 by nicolmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_printf.h"
#include <stdint.h>
#include <unistd.h>

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*data;

	if ((int)elementCount < 0 && (int)elementSize < 0)
		return (NULL);
	data = malloc(elementCount * elementSize);
	if (data == NULL)
		return (NULL);
	ft_bzero(data, elementCount * elementSize);
	return (data);
}
