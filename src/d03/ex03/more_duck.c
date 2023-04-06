/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_duck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:20:17 by msloot            #+#    #+#             */
/*   Updated: 2023/04/06 18:42:33 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stddef.h>

size_t	more_duck(uint8_t *duck, size_t size)
{
	size_t	i;
	size_t	ret;

	i = 1;
	ret = 0;
	while (i < size)
	{
		if (duck[i] > duck[i - 1])
			ret++;
		i++;
	}
	return (ret);
}
