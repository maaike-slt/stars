/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   over_42.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:57:17 by msloot            #+#    #+#             */
/*   Updated: 2023/04/05 16:28:13 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stddef.h>

size_t	over_42(uint8_t *arr, size_t size)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (i != size)
	{
		if (arr[i] > 42)
			count++;
		i++;
	}
	return (count);
}
